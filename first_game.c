#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player;
    int computer;

    while(1){
        printf("Enter player move:\t R for rock \t P for paper \t S for Scissor:");
        scanf("%c", &player);

        computer = rand() % 3;

        if (player == 'R' && computer == 1){
            printf("Play again\n");
            exit(1);
        }
        else if (player == 'R' && computer == 2){
            printf("You lost!! \t Paper beats rock!\n");
        }
        else if (player == 'R' && computer == 3){
            printf("You won!! \t Rock beats scissor!\n");
        }
        else if (player == 'P' && computer == 1){
            printf("You won!! \t Paper beats rock!\n");
        }
        else if (player == 'P' && computer == 2){
            printf("Play again\n");
        }
        else if (player == 'P' && computer == 3){
            printf("You lost!! \t Scissor beats paper!\n");
        }
        else if (player == 'S' && computer == 1){
            printf("You lost!! \t Rock beats scissor!\n");
        }
        else if (player == 'S' && computer == 2){
            printf("You won!! \t Scissor beats paper!\n");
        }
        else if (player == 'S' && computer == 3){
            printf("Play again\n");
        }
        else {
            printf("mmm?\n");
        }
    }

    return 0;
}
