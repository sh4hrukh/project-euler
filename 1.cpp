#include <bits/stdc++.h>
using namespace std;


int main() { 
    int t;
    cin>>t;
    while(t--)
    {

        long n;
        cin>>n;
        --n;
        long a=3*(((n/3)*(n/3+1))/2);
        long b=5*(((n/5)*(n/5+1))/2);
        long c=15*(((n/15)*(n/15+1))/2);
        cout<<a+b-c<<endl;

    }


    return 0;
}
