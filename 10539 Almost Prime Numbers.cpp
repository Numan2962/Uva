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

#define MAX 1005000
#define M   1000000000000
using namespace std;
bool prime[MAX+29];
vector<ll>v;
void sieve()
{
    ll i,j,s;
    prime[0]=prime[1]=true;
    for(i=4;i<=MAX;i+=2)
        prime[i]=true;
    for(i=3;i*i<=MAX;i+=2)
        if(!prime[i])
            for(j=i*i;j<=MAX;j+=2*i)
                prime[j]=true;

    for(i=4;i<=M;i*=2)
        v.pb(i);
    for(i=3;i<=MAX;i+=2)
        if(!prime[i])
            for(s=i*i;s<=M;s*=i)
                v.pb(s);
    sort(v.begin(),v.end());

}
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */
    sieve();
    ll a,b,k,i,j,s=0;
    cin>>k;
    while(k--)
    {
    cin>>a>>b;
    for(i=0;v[i]<a;i++){}
    for(j=0;v[j]<=b;j++){}

    cout<<(j-i)<<endl;
    }




    task_completed;
}
