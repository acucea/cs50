#include <stdio.h>
#include <cs50.h>

int main()
{
    
    int minutes , bottles;
 
    printf("minutes: ");minutes = GetInt();
    
    bottles = minutes * 12;
    
    printf("bottles: %d",bottles);
    
    /*Only standard C version
    int VALID,retry;
    
    printf("minutes: ");VALID = scanf(" %d",&minutes);
    
    if(VALID == 0)
    {
        return 0;
    }
    
    bottles = (int)(minutes * 12);
    
    printf("bottles: %d",bottles);*/
}
