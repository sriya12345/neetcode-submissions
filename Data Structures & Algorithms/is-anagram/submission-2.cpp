class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector <int> arr1(26,0);
        //vector <int> arr2[25:0];

        for(int i=0; i < s.size(); i++){
            arr1[s[i]-'a']++;
            arr1[t[i]-'a']--;
        }
        for(int count: arr1){
            if(count!=0) return false;
        }

        return true;
    }
};
