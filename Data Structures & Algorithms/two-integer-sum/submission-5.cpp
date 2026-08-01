class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> newo;
        for(int i=0;i<nums.size();i++){
            int req = target - nums[i];
            if(newo.count(req)){
                return {newo[req],i};
            }
            newo[nums[i]]=i;
        }return{};
    }
};
