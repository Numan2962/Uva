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
        if(n<8)
           pf("Impossible.\n");
           else{
         if(n&1)
            m=n-5;
        else
            m=n-4;

    for(i=0;i*i<=m;i++)
    {
        if(!(arr[m-(prime[i])]))
        {
            p=prime[i];
            q=m-prime[i];
            break;
        }
    }
    if(n&1)
        pf("%d %d %d %d\n",2,3,p,q);
    else
        pf("%d %d %d %d\n",2,2,p,q);

    }
    }
    return 0;
}
