#include <stdio.h>
#include <stdlib.h>

void swapping(int *, int *);

int main()
{
    int var_1, var_2;
    printf("Enter the first and second variables:\n");
    scanf("%d%d", &var_1, &var_2);
    printf("\nPre-swap:%d, %d\n", var_1, var_2);
    swapping(&var_1, &var_2);
    printf("\nPost-swap:%d, %d\n", var_1, var_2);
    return 0;
}
void swapping(int *var_1, int *var_2)
{
    //int temp;

    //temp = *var_1;
    //*var_1 = *var_2;
    //*var_2 = temp;
    *var_1 = *var_1 - *var_2;
    *var_2 = *var_1 + *var_2;
    *var_1 = *var_2 - *var_1;

}
