#include<bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
#define S 100000009
bool arr[S+29];
void sieve()
{
    int i,j;
    arr[0]=arr[1]=true;
    for(i=4;i<=S;i+=2)
        arr[i]=true;
    for(i=3;i*i<=S;i+=2)
        if(!arr[i])
            for(j=i*i;j<=S;j+=2*i)
                arr[j]=true;
}
int main()
{
    sieve();
    int n,i;
    while(cin>>n)
    {
        if(n==1)
            printf("%d is not the sum of two primes!\n",1);
        else if(n&1)
        {
            if(!arr[n-2])
                printf("%d is the sum of %d and %d.\n",n,2,n-2);
            else
                printf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            if(n<=6)
             printf("%d is not the sum of two primes!\n",n);
            else
            for(i=n/2;i>=1;i--)
            {
                if(!arr[i]&&!arr[n-i]&& ((n-i)-i)>0)
                {
                    printf("%d is the sum of %d and %d.\n",n,i,n-i);
                    break;
                }
            }
        }
    }
    return 0;
}
