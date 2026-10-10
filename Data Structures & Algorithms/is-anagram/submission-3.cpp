class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> smap, tmap;
        if (s.size() != t.size()){
            return false;
        }
        for (char i : s){
            if (smap.find(i) == smap.end()){
                smap.insert({i, 1});
            } else {
                smap.at(i)++;
            }            
        }
        for (char j : t){
            if (tmap.find(j) == tmap.end()){
                tmap.insert({j, 1});
            } else {
                tmap.at(j)++;
            }            
        }
        return smap == tmap;
    }
};
