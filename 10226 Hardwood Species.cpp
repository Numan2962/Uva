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

Numan2962
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout); */
    caseT;
    getchar();
    getchar();
    loop(cs,1,T)
    {
        string s;
        map<string,double> m;
        map<string,double> ::iterator it;
        int k=0;
        while(getline(cin,s))
        {
            if(s=="")
                break;
            m[s]++;
            k++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<fixed<<setprecision(4)<<((it->second)/k)*100<<endl;
        }
        m.clear();

        if(cs!=T)
            line;
    }


    task_completed;
}
