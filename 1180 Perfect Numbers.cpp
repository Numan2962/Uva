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

#define MAX 200

using namespace std;
vector<int>v;
Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */

    int n,a,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
        if(i!=n-1)
            getchar();
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]==2||v[i]==3||v[i]==5||v[i]==7||v[i]==13||v[i]==17||v[i]==19)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }


    task_completed;
}
