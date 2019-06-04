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

#define MAX 40

using namespace std;
bool prime[MAX+29];
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=true;
    for(i=4;i<=MAX;i+=2)
        prime[i]=true;
    for(i=3;i*i<=MAX;i+=2)
        if(!prime[i])
            for(j=i*i;j<=MAX;j+=2*i)
                prime[j]=true;

}
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */
    sieve();
    ll n,s;
    while(sf("%lld",&n)==1 && n)
    {
        if(n==2||n==3||n==5||n==7||n==13)
        {
            s=pow(2,n-1)*(pow(2,n)-1);
            pf("Perfect: %d!\n",s);
        }
        else if(n==17)
            pf("Perfect: 8589869056!\n");
        else if(n==19)
            pf("Perfect: 137438691328!\n");
        else if(n==31)
            pf("Perfect: 2305843008139952128!\n");
        else if(!prime[n])
            pf("Given number is prime. But, NO perfect number is available.\n");
        else
            pf("Given number is NOT prime! NO perfect number is available.\n");
    }


    task_completed;
}
