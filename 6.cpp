#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
       /* long sum=n*(n+1)/2;
        sum=sum*sum;
        long sos=n*(n+1)*(2*n+1)/6;
        cout<<(sum-sos)<<endl;*/
        long n2=n*n,n3=n2*n,n4=n3*n;
        long a=(n4-n2)/4;
        long b=(n3-n)/6;
        cout<<a+b<<endl;
    }
    return 0;
}
