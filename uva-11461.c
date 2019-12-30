#include<stdio.h>
#include<math.h>
int main ()
{
    int n,m,g,h,i;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
            g=0;
        for(i=n ; i<=m; i++)
            {
             h=sqrt(i);
            if(h*h==i)
            g++ ;
            }
        printf("%d\n",g);
    }
    return 0;
}
