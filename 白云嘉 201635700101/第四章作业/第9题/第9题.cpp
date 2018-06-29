# include <stdio.h>

int main()
{
    int i,j,k=1;
    int a[5];
    
    do
    {
        printf("请输入一个正整数(1~99999):");
        scanf("%d",&i);
        if (i<=99999 && i>0)
        {
            break;
        }
        else
        {
            printf("输入超出范围，请重新输入");
        }
    }
    while(1);
    
    for(j=0; j<5; ++j)
    {
        a[j]=i%10;
        i/=10;
        if(i!=0)
        {
            ++k;
        }
    }
    
    printf("这个整数一共有%d位\n",k);
    
    for(i=k-1; i>=0; --i)
    {
        printf("第%d位的数字是%d\n",i+1,a[i]);
    }
    
    printf("逆序输出:");
    for(i=0; i<k; ++i)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    
    return 0;
}
