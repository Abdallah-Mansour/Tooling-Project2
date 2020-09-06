#include <stdio.h>
#include <stdlib.h>
//#define addition_multiplication(a,b) (a+b)


int *addition_multiplication(int, int);
//int result[2]={0};
int main()
{
    int val1, val2;
    printf("Specify the two values: \n");
    scanf("%d%d", &val1, &val2);
    int *result = addition_multiplication(val1, val2);
    printf("\nThe summation of %d, %d is %d while the product is %d\n", val1, val2, *result, *(result+1));

    return 0;
}
int *addition_multiplication(int val1,int val2){

    static int res[2]={0};
    res[0]=val1+val2;
    res[1]=val1*val2;
    //printf("%d%d", *(res+0), *(res+1));

    return res;
}
