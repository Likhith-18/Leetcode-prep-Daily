class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        // int res = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         res ^= (nums1[i]^nums2[j]);
        //     }
        // }
        // return res;

        int xorr1 = 0;
        int xorr2 = 0;
        for(auto it:nums1){
            xorr1 ^= it;
        }
        for(auto it:nums2){
            xorr2 ^= it;
        }

        if(n&1 && m&1) return xorr1^xorr2;
        if(!(n&1) && !(m&1)) return 0;
        else if(!(n&1)) return xorr1;

        return xorr2; 
    }
};