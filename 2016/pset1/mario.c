#include <stdio.h>
#include <cs50.h>

int main()
{
    
    int h,i,j,space;
      
    do
    {
        printf("Height:");h = GetInt();  
      
      if(h == 0)
        exit(0);
      
    }while(h  > 23 || h < 1);
    
    for(i = 0;i < h; ++i)
    {
        for(space = h - i - 1; space > 0; --space)
            printf(" ");
        for(j = 0; j < i+2; ++j)
            printf("#");
        printf("\n");
    }
    
     
}
