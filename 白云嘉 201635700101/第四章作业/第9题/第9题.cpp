# include <stdio.h>

int main()
{
    int i,j,k=1;
    int a[5];
    
    do
    {
        printf("������һ��������(1~99999):");
        scanf("%d",&i);
        if (i<=99999 && i>0)
        {
            break;
        }
        else
        {
            printf("���볬����Χ������������");
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
    
    printf("�������һ����%dλ\n",k);
    
    for(i=k-1; i>=0; --i)
    {
        printf("��%dλ��������%d\n",i+1,a[i]);
    }
    
    printf("�������:");
    for(i=0; i<k; ++i)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    
    return 0;
}
