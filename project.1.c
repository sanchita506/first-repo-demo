#include<stdio.h>
#include<stdlib.h>
#include<time.h> //
//main function
int main () 
{
    int random,guess,no_of_guess;
    no_of_guess = 0;
    srand(time(NULL));//FOR GENERATE RANDOM NUMBER


    printf("welcom to the world of guessing number game\n");
    random = rand()%100 +1; //generating no between 1 to 100

    do{
        printf("\n please enter a number between(1 to 100 ) = ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess>random){
            printf("guess a smaller number");
        }else if(guess<random)  {
            printf("guess a smaller number ");
        }else{
            printf("congratulation !!!! you have successfully guess the number in %d attempts",no_of_guess);
        }
    } while(guess != random);
    printf("\n Bye Bye, Thanks for playing my game \n");
    printf("\n Develop by : Sanchita Routray ");

}