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

#define MAX 2000

using namespace std;

bool prime[MAX+29];
void sieve()
{
    int i,j;
    prime[0]=true;
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
    string s;
    while(cin>>s)
    {
        int sum=0;
        loop(i,0,s.size()-1)
        {
            if(s[i]>='a'&&s[i]<='z')
                sum+=((s[i]-'a')+1);
            else
                sum+=((s[i]-'A')+27);
        }
        if(!prime[sum])
            pf("It is a prime word.\n");
        else
            pf("It is not a prime word.\n");
    }


    task_completed;
}
