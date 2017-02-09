#include<stdio.h>
#include<math.h>
void complex(float a,float b);
void main()
{
 float a,b,c,d,e,f,g,h;
 printf("enter the three real part ");
 scanf("%f%f%f",&a,&c,&e);
 printf("enter the three imaginary part ");
 scanf("%f%f%f",&b,&d,&f);
 g=a+c+e;
 h=b+d+f;
 complex(g,h);
}
 
void complex(float a,float b)
{
 printf("the addition of two complex is %f+i%f",a,b);
}
