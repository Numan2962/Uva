#include<bits/stdc++.h>
using namespace std;
#define S 18500000
bool arr[S];
int prime[S];
int k=1;
void sieve()
{
    int i,j;
    //prime[0]=2;
    arr[0]=arr[1]=true;
    for(i=3;i*i<=S;i+=2)
        if(!arr[i])
            for(j=i*i;j<=S;j+=2*i)
                arr[j]=true;
    for(i=3;i<=S;i+=2)
    if(!arr[i]&& !arr[i+2])
    {
        prime[k]=i;
        k++;
    }
}
int main()
{
    sieve();

    int n,i;
    while(cin>>n)
    {
        printf("(%d, %d)\n",prime[n],prime[n]+2);
    }
    return 0;
}
