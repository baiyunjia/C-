#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, h;
    double p1, p2, p3, p4;
   
    printf("Please enter coordinate: ");
    scanf("%d %d", &x, &y);
    
    p1 = pow(x-2, 2) + pow(y-2, 2);
    p2 = pow(x-2, 2) + pow(y+2, 2);
    p3 = pow(x+2, 2) + pow(y-2, 2);
    p4 = pow(x+2, 2) + pow(y+2, 2);
    
    (p1<=1 || p2<=1 || p3<=1 || p4<=1) ? h = 10 : h = 0;
    printf("The building height on this point is %d\n", h);
    return 0;
}
