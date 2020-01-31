#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    float a,b,p,s,m,d,n;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    printf("what you want to do...?\n1.Add\n2.Subtract\n3.Multiply\n4.Division:");
    p=a+b;
    s=a-b;
    m=a*b;
    d=a/b;
    scanf("%f",&n);
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
        }
        getch();
}
