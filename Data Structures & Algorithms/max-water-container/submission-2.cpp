class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int water = 0;
        while (l < r) {
            int temp_water = (r - l) * min(heights[l],heights[r]);
            if (temp_water > water)
                water = temp_water;
            if (heights[l] < heights [r]) {
                l += 1;
            } else {
                r -= 1;
            }
        }
        return water;
    }
};
