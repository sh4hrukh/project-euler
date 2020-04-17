#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<long> v(28);
    vector<unsigned long long> s(28);
    v[0]=0;
    v[1]=2;
    s[0]=0;
    s[1]=2;
    for(int i=2;i<28;i++)
    {
        v[i]=4*v[i-1]+v[i-2];
        s[i]=s[i-1]+v[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        cout<<s[upper_bound(v.begin(),v.end(),n)-v.begin()-1]<<endl;
    }
    return 0;
}
