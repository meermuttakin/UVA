#include<stdio.h>

int main ()
{
    int i,t,a,b;

    while(scanf("%d",&t)==1)
        for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
