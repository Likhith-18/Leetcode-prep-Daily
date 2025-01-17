class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;

        // org[0]^org[1]^org[1]^org[2]^org[2]^org[0]
        // everything will be 0 atlast

        for(auto it:derived){
            sum ^= it;
        }

        return sum==0;
    }
};