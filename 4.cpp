#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long x)
{
        long n=0,m=x;
        while(x>0)
        {
                n=n*10+x%10;
                x/=10;
            
        }
        return n==m;
        
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {    
    int n;
    cin>>n;
    long r=0,count=0;
    for(int p=990;p>99;p-=11)
    {
            for(int q=999;q>99;q--)
            {
                    long t= p* q;
                    if( r< t && t<n && isPalindrome(t))
                    {
                            r=t;
                            break;
                    }
                    if(t<r)
                    {
                            break;
                    }
                    count++;
            }
    }
    cout<<r<<endl;
    }
    return 0;
    
}
