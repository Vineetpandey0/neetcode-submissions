class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        vector<pair<int,int>> freq;
        int curr = nums[0];
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == curr) {
                cnt++;
            }
            else {
                freq.push_back({cnt, curr});
                curr = nums[i];
                cnt = 1;
            }
        }

        freq.push_back({cnt, curr});

        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};