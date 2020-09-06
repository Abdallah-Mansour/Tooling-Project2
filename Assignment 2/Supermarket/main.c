#include <stdio.h>
#include <stdlib.h>
#include "ice_cream.h"

int main()
{
    int var_1, var_2, var_3, res1 = 0, res2 = 0;
    printf("Insert the number of ice cream in stock: ");
    scanf("%d", &var_1);
    printf("Ice cream in stock: %d", var_1);
    printf("\n\nInsert the number of made ice cream: ");
    scanf("%d", &var_2);
    printf("Ice cream made: %d ", var_2);
    res1 = increment_icecream(var_1, var_2);
    printf("\n\nUpdated stock: %d", res1);
    printf("\n\nInsert how many have been sold: ");
    scanf("%d", &var_3);
    printf("Ice cream sold:%d ", var_3);
    res2 = decrement_icecream(res1, var_3);
    printf("\n\nUpdated stock: %d", res2);
    return 0;
}
