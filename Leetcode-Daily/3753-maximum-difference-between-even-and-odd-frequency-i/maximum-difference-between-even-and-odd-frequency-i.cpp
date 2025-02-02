class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        int maxiO=INT_MIN,miniE=INT_MAX;
        for(auto [key,val]:mp){
            if(val&1){
                maxiO = max(maxiO,val);
            }
            else{
                miniE = min(miniE,val);
            }
        }

        return maxiO-miniE;
    }
};