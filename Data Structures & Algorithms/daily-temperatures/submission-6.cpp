class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> result (temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while (!st.empty() && t > st.top().first){
                auto paired = st.top();
                st.pop();
                result[paired.second] = i - paired.second;
            }
            st.push({temperatures[i], i});
        }
        return result;

    }
};
