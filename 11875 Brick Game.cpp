#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    int arr[11];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int k=0,s;
        cin>>n;
        for(j=0;j<n;j++)cin>>arr[j];
        sort(arr,arr+n);
        k=n/2;
        if(!(n&1))
            s=(arr[k]+arr[k-1])/2;
        else
            s=arr[k];
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
