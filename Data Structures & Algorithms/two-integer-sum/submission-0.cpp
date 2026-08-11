class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> sumMap;
        for(int i=0; i<nums.size(); i++){
            int req = target - nums[i];
            if(sumMap.find(req)!=sumMap.end()){
                return {sumMap[req], i};
            }
            sumMap[nums[i]] = i;
        }
        return {-1, -1};
    }
};
