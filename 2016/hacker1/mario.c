#include <stdio.h>
#include <cs50.h>

int main()
{
    
    int h,i,j,space;
    
    printf("Height: ");h = GetInt();
    
    for(i = 0; i < h; ++i)
    {
        for(space = h - i - 1; space > 0; space--)
            printf(" ");
        for(j = 0; j <= i; ++j)
            printf("#");
        printf("  ");
        for(j = 0; j <= i; ++j)
            printf("#");
        printf("\n");
    }
    
    
}
