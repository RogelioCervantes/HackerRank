#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp = 0;
    int *arr2 = malloc(num * sizeof(int));
    for (int i = num-1; i >= 0; i--)
    {
        arr2[temp] = arr[i];
        temp++;
    }
    
    arr = arr2;

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}