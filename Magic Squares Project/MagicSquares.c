/*
Purpose: The purpose of this lab is for students to get a better understanding
* of if-statements and  printing a format correctly. In this lab you ask the user
* to enter 9 numbers. If row0, row2, column0, and column2 equal to 15 the program
* should output this is a magic square. If the numbers are not equal to 15 then
* the program should output each row and it doesnt work.


*/
#include <stdio.h>
int main(void){
//Declare and initialize variables
int userNum1;
int userNum2;
int userNum3;
int userNum4;
int userNum5;
int userNum6;
int userNum7;
int userNum8;
int userNum9;
int row0;
int row2;
int column0;
int column2;
int diagonal0;
int diagonal1;
int isMagic=1;
//Ask the user to enter 9 numbers
printf("Enter in the values: ");
scanf("%d %d %d %d %d %d %d %d %d",&userNum1,&userNum2,&userNum3,&userNum4,&userNum5,&userNum6,&userNum7,&userNum8,&userNum9);

printf("\n");
//Print the numbers the user entered in a 3x3 rows and columns
printf("You entered:\n");

printf("%d %d %d\n",userNum1,userNum2,userNum3);
printf("%d %d %d\n",userNum4,userNum5,userNum6);
printf("%d %d %d\n",userNum7,userNum8,userNum9);
printf("\n");
printf("Analyzing....\n");
//Add the numbers
row0=userNum1+userNum2+userNum3;
row2=userNum7+userNum8+userNum9;
column0=userNum1+userNum4+userNum7;
column2=userNum3+userNum6+userNum9;
diagonal0=userNum1+userNum5+userNum9;
diagonal1=userNum3+userNum5+userNum7;
//Create If Statements
if(row0==15){

	isMagic=1;
	}

	if(row2==15){
	isMagic=1;
         		 }
	if(column0==15){
		isMagic=1;
		}
	if(column2==15){
	    isMagic=1;
	}
	if(diagonal0==15){
	    isMagic=1;
			}
	if(diagonal1==15){
	   isMagic=1;
	}
 	if(row0 !=15)
 		 {

  printf("Row 0[%d,%d,%d]",userNum1,userNum2,userNum3);
  printf(" does not work!\n");
     		}
	if(row2 !=15){

  printf("Row 2[%d,%d,%d]",userNum4,userNum5,userNum6);
  printf(" does not work!\n");
			}
	if(column0!=15){

  printf("Column 0[%d,%d,%d]",userNum1,userNum4,userNum7);
  printf(" does not work!\n");
			}
	if(column2!=15){

  printf("Column 2[%d,%d,%d]",userNum3,userNum6,userNum9);
  printf(" does not work!\n");
			}
	if(diagonal0!=15){

	printf("Diagonal 0[%d,%d,%d]",userNum1,userNum5,userNum9);
  printf(" does not work!\n");
		}
	if( diagonal1!=15){
	printf("Diagonal 1[%d,%d,%d]",userNum3,userNum5,userNum7);
  printf(" does not work!\n");

  }

	if (isMagic==1){
	printf("\n");
	printf("This is a magic square!\n");
	printf("\n");
}
else{
	printf("\n");
	printf("This is not a magic square!\n");
	printf("\n");
}


return 0;
}

