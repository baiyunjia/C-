# include <stdio.h>

int main()
{
    double profit,bonus=0;
    
    printf("输入当月利润I:");
    scanf("%lf",&profit);
    
    if(profit>1000000)
    {
        bonus = 1.0/100*(profit-1000000);
        profit = 1000000;
    }
    if(profit<=1000000 && profit>600000)
    {
        bonus += 1.5/100*(profit-600000);
        profit = 600000;
    }
    if(profit<=600000 && profit>400000)
    {
        bonus += 3.0/100*(profit-400000);
        profit = 400000;
    }
    if(profit<=400000 && profit>200000)
    {
        bonus += 5.0/100*(profit-200000);
        profit = 200000;
    }
    if(profit<=200000 && profit>100000)
    {
        bonus += 7.5/100*(profit-100000);
        profit = 100000;
    }
    if(profit<=100000 && profit>=0)
    {
        bonus += 10.0/100*profit;
    }

    printf("可获得奖金总数为%lf\n",bonus);
    
    return 0;
}
