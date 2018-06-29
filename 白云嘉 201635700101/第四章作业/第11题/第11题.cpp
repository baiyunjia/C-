#include <stdio.h>  
  
int main()    
{    
    int a[4] ;    
    int i,j;    
    int temp;    
    printf("请输入4个数： ");    
    for( i = 0; i < 4; i++ )    
    {    
        scanf("%d",&a[i]);    
    }    
    for( i = 0; i < 4; i++ )    
    {    
        for( j = 0; j < (4-i); j++ )    
            if( a[j] > a[j+1] )    
            {    
                temp = a[j];    
                a[j] = a[j+1];    
                a[j+1] = temp;    
            }    
    }    
    printf("这4个数由小到大的排列顺序如下：");    
    for( i = 0; i < 4; i++ )    
    {    
        printf("%d ",a[i]);    
    }    
    printf("\n");    
    return 0;    
}  
  
