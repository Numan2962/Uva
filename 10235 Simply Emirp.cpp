#include<bits/stdc++.h>
using namespace std;

typedef long long int   ll;
typedef vector<int,int> pii;


#define sf              scanf
#define pf              printf
#define sfii(n,m)       scanf("%d %d",&n,&m)
#define sfll(n,m)       scanf("%lld %lld",&n,&m)
#define sfi(n)          scanf("%d",&n)
#define sfl(n)          scanf("%lld",&n)
#define pfi(n)          printf("%d",n)
#define pfl(n)          printf("%lld",n)
#define spc             printf(" ")
#define line            printf("\n")
#define pb              push_back
#define mp              make_pair
#define loop(i,x,y)     for(int i=int(x); i<=int(y); i++)
#define rloop(i,y,x)    for(int i=int(y); i>=int(x); i--)
#define caseT           int T,cs;scanf("%d",&T)
#define Numan2962       int main()
#define task_completed  return 0

#define MAX 1000000

using namespace std;

int arr[MAX+29];
bool prime[MAX];
int rev(int n)
{
    int r,s=0;
    while(n)
    {
    r=n%10;
    s=s*10+r;
    n/=10;
    }
    return s;
}
void sieve()
{
    int i,j;
    prime[0]=prime[1]=true;
    for(i=4;i<=MAX;i+=2)
        prime[i]=true;
    for(int i=3;i*i<=MAX;i+=2)
        if(!prime[i])
            for(j=i*i;j<=MAX;j+=2*i)
                prime[j]=true;
}
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */

    sieve();
    int n;
    while(cin>>n)
    {
        if(prime[n])
            pf("%d is not prime.\n",n);
        else if(!prime[n])
        {
            if(!prime[rev(n)]&& n!=rev(n))
                pf("%d is emirp.\n",n);
            else
                pf("%d is prime.\n",n);
        }
    }

    task_completed;
}
