#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m,x,y;
    scanf("%d",&k);
    while(k!=0)
    {
        scanf("%d%d",&m,&n);
        while(k--)
        {
            scanf("%d%d",&x,&y);
            if(x==m||y==n)
                printf("divisa\n");
            else if(x>m&&y>n)
                printf("NE\n");
            else if(x>m&&y<n)
                printf("SE\n");
            else if(x<m&&y>n)
                printf("NO\n");
            else if(x<m&&y<n)
                printf("SO\n");
        }
        scanf("%d",&k);
    }


    return 0;
}
