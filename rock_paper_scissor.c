#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Let's play the game Rock,Paper & Scissors\n");
    printf("For rock,enter 0||for paper,enter 1||scissors are 2\n");
    char username[50];
    printf("Enter the User's name:");
    scanf("%s", username);
    int i = 1;
    int count = 0, flip = 0;
    int n;
    while (1)
    {
        printf("%s's turn:\n", username);
        printf("Enter your gesture:");
        scanf("%d", &n);
        if (n > 2)
        {
            printf("Invalid number.....game is closing");
            break;
        }
        printf("%s's gesture:",username);
        if (n == 0)
        {
            printf("Rock\n");
        }
        else if (n == 1)
        {
            printf("Paper\n");
        }
        else
        {
            printf("Scissor\n");
        }
        printf("Computer's turn:\n");

        srand(time(NULL));
        
        int val = rand() % 3;

        printf("Computer's gesture:");

        if (val == 0)
        {
            printf("Rock\n");
        }
        else if (val == 1)
        {
            printf("Paper\n");
        }
        else
        {
            printf("Scissors\n");
        }
        if ((n == 0 && val == 2) || (n == 1 && val == 0) || (n == 2 && val == 1))
        {
            printf("%s wins this round\n", username);
            count++;
        }
        else if ((n == 0 && val == 1) || (n == 1 && val == 2) || (n == 2 && val == 0))
        {
            printf("Computer wins this round\n");
            flip++;
        }
        else if (n == val)
        {
            printf("Draw,let's move to the next round\n");
        }
        if (count == 3 || flip == 3)
        {
            break;
        }
        printf("The score is:\n %s:%d\n Computer:%d\n", username, count, flip);
    }
    if (count > flip)
    {
        printf("SO WE GOT THE WINNER\n");
        printf("%s wins the game\n", username);
    }
    else
    {
        printf("SO WE GOT THE WINNER\n");
        printf("Computer wins the game\n");
    }
    printf("Thanks for playing\n");
    return 0;
}