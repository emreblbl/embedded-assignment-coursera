/**
 * @file stats.h
 * @brief Header file for statistical analysis functions 
 * 
 * 
 * This file contains declarations for functions that perform
 * statistical analysis on an array of unsigned char data, including
 * calculating the mean, median, maximum, minimum, and sorting the data.
 * 
 * 
 * @author Emre Bulbul
 * @date 01/11/2024 
 *
 * 
 */


#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array 
 * 
 * This function prints the calculated statistics of an array including :
 * minimum, maximum, mean, and median.
 * 
 * @param array Pointer to the unsigned char array
 * @param length Size of the array 
 * 
 * @return None 
 */

void print_statistics(unsigned char* array, unsigned int length);


/**
 * @brief Prints the contents of an array 
 * 
 * Given an array of dat and a lenght, prints the array to the screen 
 * 
 * @param array Pointer to the unsigned char array 
 * @param length Size of the array 
 * 
 * 
 * @return None 
 */

void print_array(unsigned char* array, unsigned int length);


/**
 * @brief Calculates the median of an array 
 * 
 * Given an array of data and a length, returns the median value
 * 
 * 
 * @param array Pointer to the unsigned char array 
 * @param length Size of the array
 * 
 * @return The median value of the array 
 */

unsigned char find_median(unsigned char* array, unsigned int length);


/**
 * @brief Calculates the mean of an array
 * 
 * Given an array of data and a length, returns the mean value
 * 
 * @param array Pointer to the unsigned char array 
 * @param length Size of the array
 * 
 * @return The mean value of the array
 */

unsigned char find_mean(unsigned char* array, unsigned int length);

/**
 * @brief Finds the maximum value in an array 
 * 
 * Given an array of dat and a length, returns the maximum value
 * 
 * 
 * @param array Pointer to the unsigned char array
 * @param legnth size of the array 
 */

unsigned char find_maximum(unsigned char* array, unsigned int length);


/**
 * @brief Finds the minimum value in an array 
 * 
 * Given an array of data and a length, returns the minimum value
 * 
 * @param array Pointer to the unsigned char array
 * @param length Size of the array
 * 
 * 
 * @return the minimum value in the array
 */

unsigned char find_minimum(unsigned char* array, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest value (zeroth element is the largest, last element is smallest)
 *
 * @param array Pointer to the unsigned char array
 * @param length Size of the array
 *
 * @return None
 */
void sort_array(unsigned char* array, unsigned int length);


#endif /* __STATS_H__ */

 