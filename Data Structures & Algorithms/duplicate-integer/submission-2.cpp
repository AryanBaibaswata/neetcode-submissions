class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for (int i : nums){
            if (um.find(i) == um.end()){
                um.insert({i, 1});
            } else {
                return true;
            }
        }
        return false;
    
    }
};