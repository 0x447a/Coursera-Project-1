/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file S T A T S . H - "stats.h" 
 * @brief Header file for stats.c
 *
 * This file will include system headers & function forward declarations 
 * that are needed for use in other source files
 *
 * @author Joshua Felix
 * @date 10/19/25
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#include <stdio.h>

/* Add Your Declarations and Function Comments here */
void print_statistics(void);
/**
 * @brief Prints the statistics mean, median, minimum, and maximum of the array
 * @param This function contains no parameters 
 * @return This function returns void
 */

int find_median(unsigned char *arr, int len);

/**                                                                                                                                                                                                 
 * @brief Returns the median of the array
 * This function first sorts the array using the sort_array function, before finding the median of the array

 * @param *arr - unsigned char: Provides the entire set of elements in the array
 * @param len - integer: Provides a length of the array for use in a loop  
 * @return This function returns an integer

 */

int find_mean(unsigned char *arr, int len);

/** 
 * @brief Returns the mean of the array  
 * This function calculates the mean of the array

 * @param *arr - unsigned char: Provides the entire set of the elements in the array
 * @param len - integer: Provides a length of the array for use in a loop
 * @return This function returns an integer
 */

int find_maximum(unsigned char *arr, int len);

/**  
 * @brief Returns the maximum of the array                                                                                                                                                   
 * This function returns the maximum number in the array

 * @param *arr - unsigned char: Provides the entire set of the elements in the array 
 * @param len - integer: Provides a length of the array for use in a loop                               
 * @return This function returns an integer
 */

int find_minimum(unsigned char *arr, int len);
/**
 * @brief Returns the minimum of the array
 * This function returns the minimum number in the array

 * @param *arr - unsigned char: Provides the entire set of the elements used in the array
 * @param len - integer: Provides a length of the array for use in a loop
 * @return This function returns an integer
 */

unsigned char *print_array(unsigned char *arr, int len);
/**
 * @brief Prints the list of the elements within the array         
 * This function uses a loop to print each element within the array  

 * @param *arr - unsinged char: Provides the entire set of the elements used in the array
 * @param len - integer: Provides a length of the array for use in a loop                                                                            
 * @return This function returns an unsigned char 
 */

unsigned char *sort_array(unsigned char *arr, int len);
/**                                                                                                               
 * @brief Sorts the list of elements within the array

 * This function uses a bubble sort algorithm to sort the array in an ascending order
 * @param *arr - unsigned char: Provides the entire set of the elements used in the array
 * @param len - integer: Provides a length of the array for use in a loop
 * @return This function returns an unsigned char
 */


#endif /* __STATS_H__ */
