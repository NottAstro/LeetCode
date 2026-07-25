class Solution {
public:
    bool isPalindrome(int x) {
        int64_t t1=x,d,sum=0;
        if (x>=0){
            for (;t1>0;){
                d=t1%10;
                sum=sum*10+d;
                t1=t1/10;
            }
            if (sum==x){
                return true;
            }
        }
        return false;
    }
};