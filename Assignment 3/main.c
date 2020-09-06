#include <stdio.h>
#include <stdlib.h>

int countRepeated(int *, int);
void readArray(int *, int);
void dispArray(int *, int);

int main()
{
    int size;

    printf("Specify the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    readArray(arr, size);
    dispArray(arr, size);

    printf("\n\nTotaled repeated elements in the passed array: %d\n", countRepeated(arr, size));

    return 0;
}
void readArray(int *arr, int size){

    int i;

    printf("\nInsert the elements of the %d sized array....\n", size);

    for(i=0;i<size;i++)
    {
        scanf("%d", (arr+i));
    }
}
void dispArray(int *arr, int size){

    int i;

    printf("\nThe specified array is\n\n\t\t\t");

    for(i=0;i<size;i++)
    {
        printf("%d", *(arr+i));
        printf("\t");
    }
}
int countRepeated(int *arr, int size){

    int i, j, count = 0;

    for(i=0;i<size;i++)
        for(j=i+1;j<=size;j++)
            if(*(arr+i)==*(arr+j))
            {
                count++;
                break;
            }
        //size--;

    return count;
}
