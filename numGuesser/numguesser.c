#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE -1 


int main(){
	char userName[20];
	int guess;
	int correct;
	int turns= 0;
	int keepGoing= TRUE;

	srand(time(NULL));
	correct = (rand() % 100) + 1;

	//printf("Correct: %d \n", correct); //debug

	printf("Hi. What is your name? ");
	scanf("%s", userName);

	printf("Nice to meet you %s. Let's play a game. \n", userName);
	
	while (keepGoing == TRUE){
		turns++;
		printf("Turn %d Please guess a number: ", turns);
		scanf("%d", &guess);
		//printf("You said %d \n", guess); //debug
		
		if (guess < correct){
			printf("Too low. \n");
		} else if (guess > correct){
			printf("Too high. \n");
		} else if (guess == correct) {
			printf("You GOT IT! \n");
			keepGoing = FALSE;
		}

	if (keepGoing == FALSE){

		if (turns < 7){
			printf("Great job!");
		} else if (turns > 7){
			printf("You could do better.");
		} else {
			printf("You did alright. I guess.");
		}
	} // end of turns dialogue
	} // end of while

		
	return 0;
} // end of main
