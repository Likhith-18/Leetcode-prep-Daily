class Solution {
public:
    int sos(int num){
        int sum = 0;
        while(num!=0){
            sum += (num%10)*(num%10);
            num /= 10;
        }

        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> mp;

        if(n==1) return true;

        while(true){

            int sum = sos(n);
            n = sum; 
            if(n==1){
                return true;
            }
            else if(mp.find(n)!=mp.end()) {
                return false;
            }

            mp[n]++;
        }

        return false;
    }
};