#include<stdio.h>
#include<conio.h>
int  main()
{
    float a,b,p,s,m,d;
    int n
    
    while(true)
    {
    printf("enter first numbers: ");
    scanf("%f",&a);
    printf("enter second numbers: ");
    scanf("%f",&b);
    printf("what you want to do...?\n1.Add\n2.Subtract\n3.Multiply\n4.Division:\n ");
    p=a+b;
    s=a-b;
    m=a*b;
    d=a/b;
    scanf("%d",&n);
    switch(n)
        {
        case 1 :
            printf("%f",p);
            break;
        case 2 :
            printf("%f",s);
            break;
        case 3 :
            printf("%f",m);
            break;
        case 4 :
            printf("%f",d);
            break;
        default:
            printf("invalid option!");
        }
        getch();
    }
}
