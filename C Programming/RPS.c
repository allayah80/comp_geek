/*Purpose:The purpose of this program is to use for loops and if statements to create the rock paper scissors game.
 You have to ask the user to enter the number of matches they would like to play.
 You would then have to use a for loop to print the number of each match and calculate
 the computer the computer move using random number. THen you would need to go through all of the if statements.
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main(void){
   //Declare and initialize variables
   srand(time(0));
   int numOfMatches;
   char userChoice;
   int computerScore=0;
   int userScore=0;
   int numTies=0;
   int computerMove;
   printf("Starting the CPSC 1011 Rock, Paper, Scissors Game!\n");
   //Ask the user to enter the number of matches they would like to play
   printf("Enter the number of matches to play: ");
   scanf("%d",&numOfMatches);
   printf("\n");
 //Create a for loop to print each number of match
   for(int i=1;i<=numOfMatches;i++){
     //Ask the user to enter their move either R,P,or S
     printf("Match %d: Enter R for rock, P for paper, or S for scissors: ",i);
     scanf(" %c",&userChoice);
     printf("\n");
     //Use rand to predict what the computer choice will be
     computerMove=(rand()%3);
     //Create an if statement to iterate through each option
     if(userChoice=='R'){
       if(computerMove==0)
       {
         printf("The computer choose rock. You tied!\n");
         numTies++;
         printf("Scores: You-%d Computer-%d Ties-%d\n",userScore,computerScore,numTies);
         printf("\n");
       }
       else if(computerMove==1){
         printf("The computer choose paper. You lose!\n");
         computerScore++;
         printf("Scores: You-%d Computer%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
       else if(computerMove==2){
         printf("The computer choose scissors. You win!\n");
         userScore++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
     }
     if(userChoice=='S'){
       if(computerMove==0){
         printf("The computer choose rock. You lose\n");
         computerScore++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
       else if(computerMove==1){
         printf("The computer choose paper. You win!\n");
         userScore++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
       else if(computerMove==2){
         printf("The computer choose scissors. You tied!\n");
         numTies++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
     }
     if(userChoice=='P'){
       if(computerMove==0){
         printf("The computer choose rock. You Win\n");
         userScore++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
       else if(computerMove==1){
         printf("The computer choose paper. You Tied!\n");
         numTies++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
       else if(computerMove==2){
         printf("The computer choose scissors. You lose!\n");
         computerScore++;
         printf("Scores: You-%d Computer-%d Ties-%d\
 n",userScore,computerScore,numTies);
       }
     }
   }
 //Print the score of the user,computer, and the number of ties
   printf("The game is complete, because a player reached %d wins. Final scores:\
 n",numOfMatches);
   printf("You:\t\t%d\n",userScore);
   printf("Computer:\t%d\n",computerScore);
   printf("Ties:\t\t%d\n",numTies);
   return 0;
 }
