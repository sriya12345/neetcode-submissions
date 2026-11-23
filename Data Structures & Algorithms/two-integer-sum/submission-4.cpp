class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        //1 pass: hashmap
        for(int i=0;i<nums.size();i++){

            if(mp.count(target-nums[i])){
                return {mp[target-nums[i]],i};
            }

            mp[nums[i]]=i;
        }
        return {};
    }
};
