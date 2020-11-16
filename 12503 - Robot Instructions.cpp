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

#define MAX 200009

using namespace std;

int sum(string s)
{
    if(s=="LEFT")
        return -1;
    return 1;

}
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */
    int t,n,value,a,b,c;
    string s,s2,s3;
    cin>>t;
    while(t--)
    {
        vector<string>v;
        cin>>n;
        int ts=0;
        while(n--)
        {
            cin>>s;
            if(s=="LEFT" || s=="RIGHT")
            {
                v.pb(s);
            }else
            {
                cin>>s2>>value;
                s3=v[value-1];
                v.pb(s3);
            }
        }
        loop(i,0,v.size()-1)
            ts+=sum(v[i]);

        cout<<ts<<endl;

    }


    task_completed;
}
