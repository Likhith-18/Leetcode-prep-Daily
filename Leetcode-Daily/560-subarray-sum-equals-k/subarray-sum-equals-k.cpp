class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        mp[0] = 1;
        int cnt = 0;
        int pre_sum = 0;
        for(auto it:nums){
            pre_sum += it;

            if(mp.find(pre_sum-k)!=mp.end()){
                cnt+=mp[pre_sum-k];
            }
            mp[pre_sum]++;
        }

        return cnt;
    }
};