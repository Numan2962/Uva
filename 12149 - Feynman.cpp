#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        printf("%d\n",(n*(n+1)*(2*n+1))/6);
    }
    return 0;
}
