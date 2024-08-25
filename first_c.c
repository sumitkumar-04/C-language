#include<stdio.h>
int main (){
    int num1,num2,result;
    char operator;
    
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",& operator);

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    switch (operator){
        case'+':
        result = num1+num2;
        break;
        case'*':
        result = num1*num2;
        break;
        case'-':
        result = num1-num2;
        break;
        case'/':
        result = num1/num2;
        break;
        default:
        printf("Invalid operator");
        return 0;
    }
        printf("The result is : %d", result);
        return 0;
        
}