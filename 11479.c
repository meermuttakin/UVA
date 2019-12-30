#include<stdio.h>

int main ()
{
    long long int a,b,c;
    int i ,t;

    while (scanf("%d",&t)==1)
    {
        if(t>0 && t<20)
        {
            for(i=1 ; i<=t ; i++)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                if(a+b>c && b+c>a && c+a>b)
                {
                    if(a==b && b==c && c==a)
                    {
                        printf("case : %d equilateral\n",i);
                    }
                    else if( a!=b && b!=c && c!=a)
                       {
                            printf("case : %d scalence\n ",i);
                       }
                    else if(a==b || b==c || c==a)
                       {
                            printf("case %d : isosceles\n",i);
                       }

                }
                else
                   {
                        printf("case %d : invalid\n",i);
                   }
            }
        }
    }
    return 0;
}
