//请在下方输入你的代码：
#include <stdio.h>;
int main()
{
    int i ,j, k;
    
    for (i = 9; i >=1; i--)
    { 
        for (k = 1; k <= 27 - 3 * i; k++)
        {
            printf(" ");
        }
            for (j = 1; j <= i; j++)
            {
                printf("%d*%d=%2d", i, j, i * j);
            }
        
        printf("\n");
    }
    return 0;
}
#include <stdio.h>;
int main()
{
    int i ,j, k;
    
    for (i = 1; i <= 9; i++)
    { 
        for (k = 1; k <= 27 - 3 * i; k++)
        {
            printf(" ");
        }
            for (j = 1; j <= i; j++)
            {
                printf("%d*%d=%2d", i, j, i * j);
            }
        
        printf("\n");
    }
    return 0;
}
