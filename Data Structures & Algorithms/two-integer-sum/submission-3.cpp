class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        //2 pass: hashmap
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int j=0;j<nums.size();j++){
            int res = target - nums[j];
            if(mp.count(res) && mp[res]!=j){
                return {j, mp[res]};
            }
        }
    }
};
