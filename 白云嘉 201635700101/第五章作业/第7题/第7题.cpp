#include <stdio.h>

main()

{int n1=100,n2=50,n3=10;

float k;

float s1=0,s2=0,s3=0;

for(k=1;k<=n1;k++)

s1=s1+k;

for(k=1;k<=n2;k++)

s2=s2+k*k;

for(k=1;k<=n3;k++)

s3=s3+1/k;

printf("sum=%8.2f\n",s1+s2+s3);}
