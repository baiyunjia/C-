#include <stdio.h>

main()
{
    int i,j,sum=1;
    for(i=3;i<=1000;i++)
    {
        sum=1;
        for(j=2;j<i;j++)
        {
            if( i%j==0)
                sum+=j;
        }
        if(i==sum)
        {
            printf("%3d, Òò×ÓÎª£º",i);
            for( j=2; j<i; j++ )
            {
                if( i%j == 0 )
                    printf("%3d,", j );
            }
            printf("\n");
        }
    }
}
