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

#define MAX 1000009

using namespace std;
int sum[MAX];
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */
    string s;
    int n,i,j,a,b,mn,mx,cs=0;
    while(cin>>s)
    {
        sum[0]=s[0]-'0';
        loop(a,1,s.size()-1)
        {
            sum[a]=(s[a]-'0')+sum[a-1];
        }
        printf("Case %d:\n", ++cs);
        cin>>n;
        while(n--)
        {
            cin>>i>>j;
            mn=min(i,j);
            mx=max(i,j);
            if(mn==0)
            {
                if((sum[mx]==mx+1)||(sum[mx]==0))
                    cout<<"Yes";
                else
                    cout<<"No";
            }else
            {
                if((sum[mx]-sum[mn-1]==(mx-mn+1))||(sum[mx]-sum[mn-1]==0))
                    cout<<"Yes";
                else
                    cout<<"No";
            }
            cout<<endl;

        }
    }


    task_completed;
}
