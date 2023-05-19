#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FirstNum;
    int SecondNum;
    int Result;
    char Operation;
    // USER INPUTS
    printf("\n\t\t\t\t Calculator with switch statements \n");
    printf("\n\n\t\t Please Enter First Number\n");
    scanf("%d",&FirstNum);
    printf("\n\t\t Please Enter Second Number\n");
    scanf("%d",&SecondNum);
    printf("\n\n\t\tPlease Enter Operator\n");
    scanf(" %c",&Operation);
    
    // CALCULATION
    
switch(Operation){
    
//ADDITION
case '+':
    Result = FirstNum + SecondNum;
    printf("\n\t\tAnswer is  %d",Result);
    break;

//SUBTRACTION
case '-':
    Result = FirstNum - SecondNum;
    printf("\n\t\tAnswer is  %d",Result);
    break;

//MULTIPLICATION
case '*':
    Result = FirstNum * SecondNum;
    printf("\n\t\tAnswer is  %d",Result);
    break;

//DIVISION
case '/':
    Result = FirstNum / SecondNum;
    printf("\n\t\tAnswer is  %d",Result);
    break;

default:
//ELSE STATEMENT
    printf("Please Enter Correct Operator");

}

    return 0;
}
