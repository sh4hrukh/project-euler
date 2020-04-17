#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long max=1;
        while(n%2==0)
        {
            max=2;
            n>>=1;
        }
        for(int i=3;i<=sqrt(n);i++)
        {
            while(n%i==0)
            {
                max=i;
                n/=i;
            }
        }
        if(n>2)
        {
            max=n;
        }
        cout<<max<<endl;
    }

    return 0;
}
