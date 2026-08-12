#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            if(i != 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                
                if(sum==0){
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    j++; k--;
                }
                else if(sum>0) k--;
                else j++;

                while(j<k && j!=i+1 && nums[j] == nums[j-1]) {
                    j++;
                }
                while(j<k && k!=nums.size()-1 && nums[k] == nums[k+1]) {
                    k--;
                }
            }
        }
        return ans;
    }
};
