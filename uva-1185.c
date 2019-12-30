#include<stdio.h>
int main()
{   int heru, ausar ,auset;
    while (scanf("%d %d %d",&heru,&ausar,&auset)==3)
    {
        if (heru != 0 || ausar != 0 ||auset != 0)
            break;
           else if(heru*heru==ausar*ausar+auset*auset)
            printf("Right\n");
             else if(ausar*ausar==heru*heru+auset*auset)
            printf("Right\n");
            else if(auset*auset==ausar*ausar+heru*heru)
            printf("Right\n");
            else
            printf("wrong\n");
    }
    return 0;
}
