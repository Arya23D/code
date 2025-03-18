int n=1337;
int phi=1140;
class Solution {
public:
    int Chinese_Remainder(int a,  int x, vector<int>& b){
        if (x==n) return 0;
        int p=n/x;
        int M;
        if (x==7) M=82;
        else M=4;
        
        int s=b.size();
        int exp=0;
        for(int i=0; i<s; i++)
            exp=(b[i]+10*exp)%(p-1);
        bitset<12> e(exp);
        int y=1;
        a%=n;
        for(int i=11; i>=0; i--){
            y=y*y%n;
            if (e[i]==1) y=y*a%n;
        }
        int ans=y*M*x%n;
        while( ans<0)
            ans+=n;
    
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        int g=gcd(a, n);
        if (g!=1) return Chinese_Remainder(a, g, b);
        int s=b.size();
        int exp=0;
        for(int i=0; i<s; i++)
            exp=(b[i]+10*exp)%phi;
        bitset<12> e(exp);
        int y=1;
        a%=n;
        for(int&& i=11; i>=0; i--){
            y=y*y%n;
            if (e[i]==1) y=y*a%n;
        }
        return y;
    }
};