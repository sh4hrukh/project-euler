#include <bits/stdc++.h>
using namespace std;


int main() {

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int result=-1;
        for(int c=n/3+1;c<n/2;c++)
        {
            int sqra_b=c*c-n*n+2*n*c;
            int a_b= sqrt(sqra_b);
            if(a_b*a_b==sqra_b)
            {
                int a=(n-c+a_b)/2;
                int b=n-c-a;
                result=a*b*c;
                break;
            }
        }
        cout<<result<<endl;
    } 
    return 0;
}
