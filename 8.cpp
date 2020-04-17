#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int max=0;
        int temp=1;
        int i,j=0;
        for( i=0;i<k+j&&i<n&&j<n-k;i++)
        {
            if(s[i]-'0')
            {
                temp*=s[i]-'0';
            }
            else
            {
                temp=1;
                j=i+1;
            }
        }
        if(i==k+j&&max<temp)
        {   
            max=temp;
        }
        j++;
        for(;i<n&&j<n-k;i++,j++)
        {
            if(s[i]-'0')
            {
                temp=(temp/(s[i-k]-'0'))*(s[i]-'0');
                if(max<temp)
                    max=temp;
            }
            else{
                temp=1;
                i++;
                j=i;
                for(;i<k+j&&i<n&&j<n-k;i++)
                {
                    if(s[i]-'0')
                    {
                        temp*=s[i]-'0';
                    }
                    else
                    {
                        temp=1;
                        j=i+1;
                    }
                }
                if(i==k+j&&max<temp)
                {   
                    max=temp;
                }
                i--;
            }
        }
        cout<<max<<endl;

    }

    return 0;
}
