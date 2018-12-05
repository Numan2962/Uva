#include<bits/stdc++.h>
using namespace std;
#define S 10000050
#define pf printf
#define sf scanf
bool arr[S];
int prime[S];
void sieve()
{
    int i,j,k=1;
    prime[0]=2;
    arr[0]=arr[1]=true;
    for(i=4;i<=S;i+=2)arr[i]=true;
    for(i=3;i*i<=S;i+=2)
        if(!arr[i])
            for(j=i*i;j<=S;j+=2*i)
                arr[j]=true;
    for(i=3;i<=S;i+=2)
        if(!arr[i])
    {
        prime[k]=i;
        k++;
    }
}
int main()
{
    sieve();
    int n,m,o,p,q,i;
    while(cin>>n)
    {
        if(n==0)break;
    if(n<=3)
        printf("%d:\nNO WAY!\n",n);
    else
    {
        if(n&1)
        {
            if(!arr[n-2])
                printf("%d:\n%d+%d\n",n,2,n-2);
            else
                printf("%d:\nNO WAY!\n",n);
        }else
    for(i=0;i*i<=n;i++)
    {
        if(!(arr[n-(prime[i])]))
        {
            printf("%d:\n%d+%d\n",n,prime[i],n-prime[i]);
            break;
        }
    }
    }
    }

    return 0;
}
