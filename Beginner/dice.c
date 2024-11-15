/* dice.c */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_random(int max)
{
  int x;

  /* create a random no beetwen 1 and "max" */
  x = rand() % max + 1;

  return x;
}


int main()
{
  int balance, bet, guess, dice;

  /* seeding the random, no generator */
  srand(getpid());

  balance = 1000;

  while (1)
  {
    printf("Make your bet: ");
    fflush(stdout);
    scanf("%d", &bet);

    printf("Make your guess (1-6, and 0 means quit):\n");
    scanf("%d", &guess);
    if (guess == 0)
      return 0;

    printf("Dice rolling...");
    sleep(2);
    dice = my_random(6);
    printf("Dice results: %d\n", dice);

    if (guess != dice)
    {
      balance = balance - bet;
      printf("Sorry, you lost\n");
    }
    else
    {
      balance = balance + bet * 3;
      printf("You won - congratulations!\n");
    }

    if (balance == 0)
    {
      printf("Game Over!\n");
      return 0;
    }

    printf("Balance: $%d\n", balance);

  }
}
