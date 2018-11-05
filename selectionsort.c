#include <stdio.h>
#include <cs50.h>

#define max_size 1000

void printArray(int array[], int n);

int main(void)
{
    int array[max_size];
    int pos, temp, min_element, array_size;
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

    //Sorting Algorithm
    pos = 0; //Initially Pos indicator is set to zero
    while (pos < array_size) //Till the Pos indicator reaches the end of the Array
    {
        min_element = array[pos]; //Assigning element in position pos in Array to min_element
        for (int i = pos; i < array_size; i++) //Run this every time starting from position pos
        {
            if (array[i] < min_element) //Do the following only if the element in the array < min_element
            {
                //swapping min_element with element in position pos in Array
                temp = min_element;
                //printf("Temp Value: %d\n", temp);
                min_element = array[i];
                //printf("Min Value: %d\n", min_element);
                array[i] = temp;
                //printf("Array pos %d : %d\n", i, array[i]);
            }
            //Replace the position pos in the array with the newly found min_element
            array[pos] = min_element;
            //printf("Array pos %d : %d\n", pos, array[pos]);
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