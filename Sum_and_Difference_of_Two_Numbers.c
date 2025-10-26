//Sum and Difference of Two Numbers - https://www.hackerrank.com/challenges/sum-numbers-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    float c,d,sumf,difff;   

    scanf("%d",&a);
	scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    
    scanf("%f",&c);
    scanf("%f",&d);
    
    sumf=c+d;
    difff=c-d;
     
    printf("%d ",sum);
    printf("%d \n",diff);    
    printf("%.1f ",sumf);
    printf("%.1f",difff);    
    return 0;
}
