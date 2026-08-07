class Solution {
public:
    int smallestNumber(int n, int t) {
        for(;;){
        int x=n,y, pro=1;;
        while(x>0)
        {
            y=x%10;
            pro*=y;
            x=x/10;
        }
        if(pro%t!=0){
            n++;
        }
        else{
            return n;
        }
        }
        return -1;
    }
};