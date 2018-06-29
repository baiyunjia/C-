# include <stdio.h>

int main()
{
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    y=0;
    if(x>=0)
        if(x>0) y=1;
    else y=-1;        
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
不能实现题目要求 ，else和if的配对有问题 
