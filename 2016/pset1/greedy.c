#include <stdio.h>
#include <math.h>
#include <cs50.h>

int greedy(float sum)
{

    int coins = 0,cents = 0;
    
    cents = (int)round((sum * 100));/*truncation bug fixed w/ round()*/
    
    coins = coins + (cents / 25);
    cents = cents % 25;
    
    coins = coins + (cents / 10);
    cents = cents % 10;
    
    coins = coins + (cents / 5);
    cents = cents % 5;
    
    
    coins += cents;


    return coins;
}

int main()
{
float sum;

printf("O hai! How much change is owed?");sum = GetFloat();

while(!(sum > 0.0))
{
   printf("How much change is owed?");sum = GetFloat();
      
   if(sum == 0)
        exit(0);
      
};

printf("%d\n",greedy(sum));

}
