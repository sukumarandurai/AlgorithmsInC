#include <stdio.h>
#include <cs50.h>

#define max_size 1000

void printArray(int array[], int n);
void swap(int array[], int pos1, int pos2);

int main(void)
{
    int array[max_size];
    int pos, temp, min_element, array_size, sort_size;
    do
    {
        array_size = get_int("Size of the Array (size should be a positive number): \n");
    }
    while (array_size < 0);

    printf("Enter a list of %d numbers: \n", array_size);
    //Ask for inputs in the array
    for (int i = 0; i < array_size; i++)
    {
        array[i] = get_int();
    }
    printf("Elements entered: \n");
    printArray(array, array_size);


    //Insertion Sort Algorithm here
    pos = 1;
    while (pos != array_size)
    {
        printf("Pointing to position %d\n", pos);
        for(int i = pos; i > 0; i--)
        {
            printf("Before: Left array position %d in %d and %d in %d\n", array[pos], pos, array[pos - 1], pos - 1);
            if (array[i] < array[i - 1])
            {
                swap(array, i, i - 1);
            }
            printf("After: Left array position %d in %d and %d in %d\n", array[pos], pos, array[pos - 1], pos - 1);
        }
        pos++;
    }
    //Sorted Array
    printf("Sorted Array: \n");
    printArray(array, array_size);
}

//Prints the content of a given array of size n
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int array[], int pos1, int pos2)
{
    int temp;
    temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;

}