#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    
    char cc[20];
    long long  credit_card;
    int i;
    
    printf("Number: ");credit_card =  GetLongLong();
        
    sprintf(cc,"%lld",credit_card);/*Converting long to string*/
        
    /*printf("CREDIT_CARD:%s\n",cc);*/
    
    if(strlen(cc) == 15 )/*AMERICAN EXPRESS*/
    {
        /*printf("AMEX:%c%c\n",cc[0],cc[1]);Poor Man's Debugging*/
        if((cc[0] == '3' && cc[1] == '4') || (cc[0] == '3' && cc[1] == '7'))
                printf("AMEX\n");
    }
    
    else if(strlen(cc) == 13 || strlen(cc) == 16)/*VISA or MASTER CARD*/
    {          
        
            if(cc[0] == '4' && strlen(cc) == 16)
                printf("VISA\n");
            else
                printf("MASTERCARD\n");/*MASTER CARD*/ 
    }
    
    else
        printf("INVALID\n");
}
