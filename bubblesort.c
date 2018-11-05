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


    //BubbleSort Algorithm here
    sort_size = array_size; //Set Sort size to array size
    while (sort_size != 1) //When sort size is not just 1 element, do the following
    {
        for (int i = 0; i < sort_size - 1; i++) //We go till sort size - 1 bcoz i + 1th pair will be the last element
        {
            if(array[i] > array[i + 1]) //Compare the ith and i+1 th element - if ith element is greater, swap i and i+!
            {
                swap(array, i, i + 1); //swap i and i+1
            }
        }
        sort_size--; //Reduce the available list of elements to be sorted
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