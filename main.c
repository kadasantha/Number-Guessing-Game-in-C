#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void main()
{
    int num,guess,tries=0;
    srand(time(0));
    num=rand() % 100 +1 ;
    printf("Guess My number Game!\n\n");

    do
    {
        printf("Enter s guess between 1 and 100 :");
        scanf("%d" ,&guess);
        tries++;
        if(guess > num){

            printf("Too Hgh \n");
        }
        else if(guess < num){
                printf("Too Low! \n");

        }
        else{
            printf("\nCorrect u got it in %d guess \n" ,tries);
        }
    }
    while(guess != num);

}


