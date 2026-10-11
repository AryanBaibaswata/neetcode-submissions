class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> paired;
        for (int i = 0; i < position.size(); i++) {
            paired.push_back({position[i], speed[i]});
        }
        sort(paired.rbegin(), paired.rend());
        vector<double> stack;
        for (auto& p : paired) {
            stack.push_back((double)(target - p.first) / p.second);
            if (stack.size() >= 2 &&
                stack.back() <= stack[stack.size() - 2])
            {
                stack.pop_back();
            }
        }
        return stack.size();
    }
};