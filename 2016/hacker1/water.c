#include <stdio.h>
#include <cs50.h>

long water_wasted(int min)
{

    return  ((min * 1.5) * 128) / 16; /*minute to gallons and gallons to ounces and ounces to bottles*/
    
}

int main()
{

    int min;
    
    printf("minutes:");min = GetInt();
    
    while(!(min > 0))
    {
    
    if(min == 0)
        exit(0);
    
    printf("Retry:");min = GetInt();
    
    }


    printf("%ld",water_wasted(min));
}
