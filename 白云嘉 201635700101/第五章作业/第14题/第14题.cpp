#include <stdio.h>

#include <math.h>

main()

{ float x,x0,f,f1;

x=1.5;

do



{x0=x;

f=((2*x0-4)*x0+3)*x0-6;

f1=(6*x0-8)*x0+3;

x=x0-f/f1;

}

while(fabs(x-x0)>=1e-5);

printf("The root of equation is %5.2f\n",x);

}
