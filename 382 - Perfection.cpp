#include<bits/stdc++.h>
using namespace std;

typedef long long int   ll;

const double PI = acos(-1);
const ll     MOD = 1000000007;

#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))

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
#define end1            "\n"
#define Y               printf("YES")
#define N               printf("NO")
#define pb              push_back
#define mkp             make_pair
#define lower(a)        transform(a.begin(),a.end(),a.begin(),::tolower);
#define upper(a)        transform(a.begin(),a.end(),a.begin(),::toupper);
#define loop(i,x,y)     for(int i=int(x); i<=int(y); i++)
#define rloop(i,y,x)    for(int i=int(y); i>=int(x); i--)
#define n_ofdigit       int nod(int n){int c=0;while(n>=1){n/=10;c++;}return c;}
#define ERASE(x)        x.erase(unique(x.begin(),x.end()),x.end())
#define BitTOString     to_string<char, string:: traits_type, string:: allocator_type>()
#define optimize()      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Numan2962       int main()
#define task_completed  return 0


#define MAX 200009


int sod(int n)
{
    int i,j,s=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
           s+=i;
        }
    }
    return s;
}
Numan2962
{
    int n,c=0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1 && n!=0)
    {
        int k;
        k=sod(n);
        if(n==k)
            printf("%5d  PERFECT\n",k);
        else if(n<k)
            printf("%5d  ABUNDANT\n",n);
        else if(n>k)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");

    task_completed;
}
