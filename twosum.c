class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>store;
        for(int i=0;i<nums.size();i++){
            if(store.count(nums[i])>0){
                return {i,store[nums[i]]};
            }else{
                store[target-nums[i]]=i;
            }
        }
        return{};
    }
};
