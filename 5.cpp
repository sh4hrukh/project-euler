#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> primes;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=prime[2]=true;
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=false;

                }
            }
        }
        long result=1;
        int i;
        for( i=2;i<=n;i++)
        {
            if(prime[i])
            {
                if(i*i<=n)
                result*=pow(i,int(log(n)/log(i)));
                else
                result*=i;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
