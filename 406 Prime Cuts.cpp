#include<bits/stdc++.h>
using namespace std;
#define S 1010
bool arr[S];
int prime[S];
void sieve()
{
    int i,j,k=2;
    prime[0]=1;
    prime[1]=2;
    arr[0]=true;
    for(i=4;i<=S;i+=2)
        arr[i]=true;
    for(i=3;i*i<=S;i+=2)
        if(!arr[i])
            for(j=i*i;j<=S;j+=2*i)
                arr[j]=true;
    for(i=3;i<=S;i+=2)
    {
        if(!arr[i])
        {
            prime[k]=i;
            k++;
        }
    }
}
int main()
{
    sieve();
    int n,c;
    while(cin>>n>>c)
    {
    int x[S];
    int i,j=0,k,m,o,p,q,r=0;
    for(i=0;i<=n;i++)
    {
          if(arr[i]==false)
          j++;

    }
    printf("%d %d: ",n,c);
    if(j&1)
    {
        k=(2*c)-1;
        m=k/2;
        o=(j/2)+1;
        p=(o-m)-1;
        q=p+k;
    }else if(!(j&1))
    {
        k=2*c;
        m=k/2;
        o=j/2;
        p=o-m;
        q=p+k;

    }
    if(k>j)
        {
            for(i=0;i<=n;i++)
            {
                if(!arr[i])
                {
                   x[r]=i;
                   r++;
                }
            }
            for(i=0;i<r;i++)
            {
                printf("%d",x[i]);
                if(i<r-1)
                    printf(" ");
            }
        }else{
                for(i=p;i<q;i++)
                {
                   printf("%d",prime[i]);
                   if(i<q-1)
                        printf(" ");
                }


             }

             printf("\n\n");
    }

    return 0;
}
