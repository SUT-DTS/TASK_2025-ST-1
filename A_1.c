#include <stdio.h>

#define QUENSTION 3 //选择题号，改1，2，3

int main()
{  
    #if QUENSTION == 1
    printf("hello,world!\n");
    
    #elif QUENSTION ==2
    int a = 0, b = 0;
    scanf("%d %d",&a,&b);
    printf("%d %d %d %d %d ",a+b,a-b,a*b,a/b,a%b);
    printf("%d ",a++);
    printf("%d",++a);
    
    #else
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1;j <= i; j++)
        {
            printf("%d*%d=%d  ",j,i,i*j);
        }
        printf("\n");
    }

    int i = 1, j = 1;
    while(i<=9)
    {   
        j = 1;
        while(j<=i)
        {
            printf("%d*%d=%d  ",j,i,i*j);
            j++;
        }
        i++;
        printf("\n");
    }
   
    int x = 1;
    do
    { 
       int y = 1; 
       do
       {
            printf("%d*%d=%d  ",y,x,x*y);
            y++;
       }while(y<=x);   
       printf("\n");   
       x++;
    }while(x<=9);
    #endif

    return 0;
}