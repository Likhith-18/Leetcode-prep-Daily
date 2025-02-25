class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9+7;
        vector<int> prefix(n);
        prefix[0] = arr[0];

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        int odd = 0, even = 1;
        int ans = 0;


        for(auto it:prefix){
            if(it&1) {
                ans = (ans + even) % mod;
                odd++;
            }
            else if(it%2==0){
                ans = (ans + odd) %mod;
                even++;
            }
        }

        return ans;
    }
};