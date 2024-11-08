#include <stdio.h>
#include "stats.h"

void sort_array(unsigned char *array, unsigned int length)
{
    // Bubble sort implementation
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

unsigned char find_minimum(unsigned char *array, unsigned int length)
{
    unsigned char min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
unsigned char find_maximum(unsigned char *array, unsigned int length)
{
    unsigned char max = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

unsigned char find_mean(unsigned char *array, unsigned int length)
{
    unsigned int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (unsigned char)(sum / length);
}

unsigned char find_median(unsigned char *array, unsigned int length)
{
    unsigned char temp[length];
    for (int i = 0; i < length; i++)
    {
        temp[i] = array[i];
    }

    sort_array(temp, length);

    if (length % 2 == 0)
    {
        return (temp[length / 2] + temp[(length / 2) - 1] / 2);
    }
    else
    {
        return temp[length / 2];
    }
}

void print_array(unsigned char* array, unsigned int length) {
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%3d", array[i]);
        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void print_statistics(unsigned char *array, unsigned int length)
{
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

int main(void)
{
    unsigned char test[40] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

    printf("Original ");
    print_array(test, 40);
    print_statistics(test, 40);

    printf("\nSorted ");
    sort_array(test, 40);
    print_array(test, 40);

    return 0;
}