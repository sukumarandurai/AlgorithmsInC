#include <stdio.h>
#include <cs50.h>

#define max_size 100000

int LinearSearch(int array[], int search_item);
void printArray(int array[], int n);

int main(void)
{
    int array[max_size];
    int search_item, pos;
    printf("Check if your item is a multiple of 3 ...\n\n");
    //pos, temp, min_element, array_size, sort_size;
    do
    {
        search_item = get_int("Enter the item you want to search: \n");
    }
    while (search_item < 0);

    //Create a random array
    for (int i = 0; i < max_size; i++)
    {
        array[i] = i * 3;
    }
    //printf("Elements in the Array: \n");
    //printArray(array, max_size);

    //Linear search Algorithm here
    pos = LinearSearch(array, search_item);

    //Sorted Array
    if (pos >= 0)
    {
        printf("Element Found at position %d. Hence a multiple of 3. \n", pos);
    }
    else
    {
        printf("Element not found - Hence not a multiple of 3. \n");
    }
}

int LinearSearch(int array[], int search_item)
{
    for (int i = 0; i < max_size; i++)
    {
        if (search_item == array[i])
        {
            return i;
        }
    }
    return -1;
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
