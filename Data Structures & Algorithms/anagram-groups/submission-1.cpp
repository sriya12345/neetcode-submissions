class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> res;
        map <vector<int>,vector<string>> mp;

        for(string s: strs){
            vector <int> freq(26,0);
            for(char ch: s){
                freq[ch-'a']++;
            }
            mp[freq].push_back(s);
        }
        for(auto f: mp){
            res.push_back(f.second);
        }

        return res;
    }
};
