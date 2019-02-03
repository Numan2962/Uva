#include<bits/stdc++.h>
using namespace std;
int A(string s)
{
    int i,j=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
          j+=(s[i]-'a')+1;
        else if(s[i]>='A'&&s[i]<='Z')
          j+=(s[i]-'A')+1;
    }
    return j;
}
int nod(int a)
{
    int k=0;
    while(a)
    {
        k++;
        a/=10;
    }
    return k;
}
int sum(int a)
{
    if(nod(a)==1)
        return a;
    int s=0;
    while(a)
    {
        int k=a%10;
        s+=k;
        a/=10;
    }
    return sum(s);
}
int main()
{
    string a,b;
    int x,y,i,j;
    float p;
    while(getline(cin,a)&&getline(cin,b))
    {
        x=A(a);
        y=A(b);
        i=sum(x);
        j=sum(y);
        if(i>j)
        {
            int q=i;
            i=j;
            j=q;
        }
        p=(float(i)/j)*100;

        printf("%.2f %%\n",p);

    }

    return 0;
}
