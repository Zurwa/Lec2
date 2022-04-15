#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *array = NULL;
    unsigned length, i;

    printf("Enter length of array: ");
    scanf("%d", &length);

    if (length > 0)
    {
        if ((array = (int *)malloc(length * sizeof(int))) != NULL)
        {
            for (i = 0; i < length; i++)
            {
                array[i] = i * i;
            }
        }
        else
        {
            printf("Error: can't allocate memory");
        }
    }
    if (array != NULL)
    {
        free(array);
    }

    return 0;
}
