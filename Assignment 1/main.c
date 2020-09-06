#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\t###Welcome to the calculator software###\nInsert two numbers and a mathematical operator [+ - * / %%] to perform the arithmetic operation.\n");
    printf("Reset the arithmetic process by inserting 'r'.\nPress x to abort the terminal.\n");

    float num1, num2, res;
    char op;

    printf("\nInsert the first number: ");
    scanf("%f", &num1);

    while(op!='x')
    {
        printf("\nInsert the operand: ");
        scanf(" %c", &op);
        switch(op)
        {
        case '+':
            printf("\nInsert the second number: ");
            scanf("%f", &num2);
            res = num1+num2;
            printf("\nThe result of %0.2f+%0.2f = %0.2f\n", num1, num2, res);
            num1 = res;
            break;
        case '-':
            printf("\nInsert the second number: ");
            scanf("%f", &num2);
            res = num1-num2;
            printf("\nThe result of %0.2f-%0.2f = %0.2f\n", num1, num2, res);
            num1 = res;
            break;
        case '*':
            printf("\nInsert the second number: ");
            scanf("%f", &num2);
            res = num1*num2;
            printf("\nThe result of %0.2f*%0.2f = %0.2f\n", num1, num2, res);
            num1 = res;
            break;
        case '/':
            printf("\nInsert the second number: ");
            scanf("%f", &num2);
            res = num1/num2;
            printf("\nThe result of %0.2f/%0.2f = %0.2f\n", num1, num2, res);
            num1 = res;
            break;
        case '%':
            printf("\nInsert the second number: ");
            scanf("%f", &num2);
            res = fmod(num1,num2);
            printf("\nThe result of %0.2f%%%0.2f = %0.2f\n", num1, num2, res);
            num1 = res;
            break;
        case 'r':
            printf("\nReseting...\n");
            res = 0;
            printf("\nInsert the first number: ");
            scanf("%f", &num1);
            break;
        case 'x':
            printf("\nTerminal Aborted...\n");
            break;
        default:
            printf("\nUnidentified operator...");
            break;
        }

    }
    return 0;
}
