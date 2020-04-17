#include <bits/stdc++.h>
using namespace std;


int main() {
    int n=104730;
    vector<bool> prime(n,true);
    prime[0]=prime[1]=false;
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
    vector<int> primes;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
            primes.push_back(i);
    }

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<primes[n-1]<<endl;
    }

    return 0;
}
