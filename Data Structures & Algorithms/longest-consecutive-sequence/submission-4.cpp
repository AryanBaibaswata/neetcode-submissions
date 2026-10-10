class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> um(nums.begin(), nums.end());
        int longest = 0; 
        for (int j: nums){
            if (um.find(j-1) == um.end()){
                int length = 1;
                while(um.find(j + length) != um.end()){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
