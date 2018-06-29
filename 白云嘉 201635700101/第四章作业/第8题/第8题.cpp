# include <stdio.h>

int main()
{
    double score;
    
    do
    {
        printf("输入分数:");
        scanf("%lf",&score);
        if(score<0 || score>100)
        {
            printf("请重新输入");
        }
        else
        {
            break;
        }
    }
    while(1);
    
    switch(int(score)/10)
    {
    case 10:
    case 9:
        printf("A等\n");
        break;
    case 8:
        printf("B等\n");
        break;
    case 7:
        printf("C等\n");
        break;
    case 6:
        printf("D等\n");
        break;
    default:
        printf("E等\n");
    }
    
    return 0;
}
