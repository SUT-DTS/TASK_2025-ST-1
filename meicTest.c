#include <stdio.h>

int main(){
    int number,test=1;
    printf("input:");
    scanf("%d",&number);
    int sequence[number];
    for (int i = 0; i < number; i++)
    {
        sequence[i]=1;
    }
    while (1)
    {
        test=1;
        for (int a = 0; a <= number-2; a++)
        {
            for (int b = a+1; b <= number-1; b++)
            {
                if (sequence[a]==sequence[b])
                {
                    test=0;
                }
            }
        }
        if (test)
        {
            for (int i = 0; i < number; i++)
            {
                printf("%d ",sequence[i]);
            }
            printf("\n");
        }
        sequence[number-1]++;
        for (int order = number-1; order >= 0; order--)
        {
            if (sequence[order]==number+1)
            {
                if (sequence[0]==number+1)
                {
                    return 0;
                }
                sequence[order]=1;
                
                
                sequence[order-1]++;
                
            }
            
        }
        
        
    }
    
}
