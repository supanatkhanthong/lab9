#include<stdio.h>
int power(int , int );
int main()
{
 int n;
 float f,num,res;
 printf("Enter any number : ");
 scanf("%f", &num);
 printf("Enter power of number : ");
 while(scanf("%f",&f)!=1 || (int)f != f)
{
printf("power number not correct!!!\nEnter Power of number agian : ");
}
n = f;
 res = power(num,f);
 printf("%f's power %0.f = %f",num,f,res);
 return 0;
}
int power(int n, int p)
{
 int r=1;
 for(; p>=1; p--)
 r = r*n;
 return r;
}