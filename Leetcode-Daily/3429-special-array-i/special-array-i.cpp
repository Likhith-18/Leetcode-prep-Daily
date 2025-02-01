class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        int parity = 0;
        for(int i=0;i<n-1;i++){
            parity = nums[i]^nums[i+1];
            if(!(parity&1)) return false;
        }

        return true;
    }
};