#include<stdio.h>
#include<math.h>
void complex(float a,float b);
void main()
{
 float a,b,c,d,e,f;
 printf("enter the real part ");
 scanf("%f%f",&a,&c);
 printf("enter the imaginary part ");
 scanf("%f%f",&b,&d);
 e=a+c;
 f=b+d;
 complex(e,f);
}
 
void complex(float a,float b)
{
 printf("the addition of two complex is %f+i%f",a,b);
}
