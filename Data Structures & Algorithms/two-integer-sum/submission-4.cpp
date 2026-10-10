class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diff;
        vector<int> soln;
        for (int i = 0; i < nums.size(); i++){
            if (diff.find(nums[i]) != diff.end()){
                int index = diff.at(nums[i]);
                if (i < index){
                    soln.push_back(i);
                    soln.push_back(index);
                    return soln;
                } else {
                    soln.push_back(index);
                    soln.push_back(i);
                    return soln;
                }
            }
            diff.insert({target - nums[i], i});
        }
    }
};
