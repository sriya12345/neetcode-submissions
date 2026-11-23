class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp; // 
        for(string s: strs){
            vector <int> freq(26,0);
            for(char ch: s){
                freq[ch -'a']++;
            }
            mp[freq].push_back(s); //
        }

        vector <vector<string>> res; //
        for(auto pair: mp){
            res.push_back(pair.second);
        }

        return res;
    }
};
