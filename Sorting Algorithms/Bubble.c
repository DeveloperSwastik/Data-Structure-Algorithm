#include <stdio.h>

int array[10];

void input_array(int[], int);
void print_array(int[], int);
void bubble_sort(int[], int);

void main()
{
    input_array(array, 5);
    bubble_sort(array, 5);
    print_array(array, 5);
}
 
void input_array(int A[], int N)
{
    int i;

    printf("Enter the values for sorting :-\n");
    for (i = 1; i <= N; i++)
    {
        printf("Value %d :", i);
        scanf("%d", &A[i]);
    }
}

void print_array(int A[], int N)
{
    int i;

    printf("\nSorted array is : {");
    for (i = 1; i <= N; i++)
    {
        if (i != N)
            printf("%d, ", A[i]);
        else
            printf("%d}", A[i]);
    }
}

void bubble_sort(int A[], int N)
{
    int temp, i, j;

    for (i = 1; i <= N - 1; i++)
    {
        for (j = 1; j <= N - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[ j ];
                A[ j ] = A[ j + 1 ];
                A[ j + 1 ] = temp;
            }
        }
    }
}