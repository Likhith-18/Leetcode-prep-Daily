class Solution {
public:
    int countBits(int num){
        int cnt = 0;

        while(num){
            cnt += num&1;
            num = num>>1;
        }
        return cnt;
    }

    int minimizeXor(int num1, int num2) {
        int bits = countBits(num2);
        int res = 0;
        //msb to lsb
        for(int i=31;i>=0&&bits>0;i--){
            if(num1 & (1<<i)){
                res |= (1<<i);
                bits--;
            }
        }

        //if remaining bits
        //starting from lsb
        for(int i=0;i<32&&bits>0;i++){
            if(!(res&(1<<i))){
                res |=(1<<i);
                bits--;
            }
        }

        return res;

    }
};