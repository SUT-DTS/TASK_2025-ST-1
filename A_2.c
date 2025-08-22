#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define QUENSTION 3 //选择题号，改1，2，3

#if QUENSTION == 1 //第一题
int main()
{   
    float x , y;
    int record[65535] ;
    int count = 0;
    scanf("%f %f",&x,&y);
    if((x-(int)x == 0&&y-(int)y == 0) && (x>0&&y>0) )  //判断是否为正整数
    { 
        if(x>=y)
        {   
            int x_c = x; 
            int y_c = y;     
            int i = 0;
            for(;x_c>=y_c;x_c--)
            {
                if((x_c%4 == 0 && x_c%100 != 0) || (x_c%400==0) || ((x_c%3200==0)&&(x_c%172800==0))) //判断是否为闰年
                {
                    count++;
                    record[i] =  x_c;
                    i++;
                }
            }
        }

        else if(y>=x)
        {   
            int x_c = x; 
            int y_c = y;     
            int i = 0;
            for(;y_c>=x_c;y_c--)
            {
                if((y_c%4 == 0 && y_c%100 != 0) || (y_c%400==0) || ((y_c%3200==0)&&(y_c%172800==0))) //判断是否为闰年
                {
                    count++;
                    record[i] =  y_c;
                    i++;
                }
            }
        }

        else printf("ERROR");

        if(count == 0) printf("NONE\n");
        else if(count>0)
        {
            printf("%d\n",count);
            for(int i = 0;i<=count-1;i++)
            {
                 printf("%d ",record[i]);
            }
        }

    }
    else 
    {
        printf("ERROR\n");
        main();
    }
    return 0;
}

#elif QUENSTION == 2   //第二题
bool Prime_Judgment(int x)
{
    if(x<=1)        return false; //小于1的不是负数
    else if(x==2)   return true;  //2是素数
    else if(x%2==0) return false; //除了2以外的偶数不是素数
    else                          //其余情况
    {
        for(int i=3;i<=sqrt(x);i+=2)
        {
            if(x%i == 0) return false;
        }
        return false;
    }
}

int main()
{   
    int x;
    scanf("%d",&x);
    if(Prime_Judgment(x)) printf("true");
    else printf("false");
    return 0;
}


#else
int main()
{
    float num ;
    scanf("%f",&num);
    if(num-(int)num == 0 && num>=1)
    {  
        int result;
        int num_int = (int)num;
        //for
        for(int i=1;i<=num_int;i++)
        {
            result += (i*i);
        }
        printf("%d\n",result);
        //while
        result = 0;
        int i = 1;
        while (i<=num_int)
        {
            result += (i*i);
            i++;
        }
        printf("%d\n",result);
        //do-while
        result = 0;
        int j = 1;
        do
        {
            result += (j*j);
        } while (++j <= num_int);
        printf("%d\n",result);
    }
    else 
    {
        printf("ERROR\n");
        main();
    }
    return 0;
}


#endif