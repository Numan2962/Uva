#include<bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    getchar();
    while(n--)
    {
        m++;
        int k=0;
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
                k+=1;
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
                k+=2;
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
                k+=3;
            else if(s[i]=='s'||s[i]=='z')
                k+=4;

        }
        printf("Case #%d: %d\n",m,k);
    }
    return 0;
}
