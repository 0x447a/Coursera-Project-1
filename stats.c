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
 * @file S T A T S . C
 * @brief Calculates array statistics
 *
 * This file calculates the mean, median, minimum, and maximum of the array
 *
 * @author Joshua Felix
 * @date 10/20/2025
 *
 */


#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int med = 0, mean = 0, min = 0, max = 0;
  
  /* Statistics and Printing Functions Go Here */  
  int find_median(unsigned char *arr, int len){
    sort_array(arr, len); // sort array from least to greatest
    int med = len / 2;
    for (int i = 0; i < len; i++){
      
      //if middle there is an odd number of values, select middle number
      //pass middle number to med
      if (len % 2 != 0 && i == med){
	med = arr[i];
	break;
      }
      //otherwise, if there is an even amount of numbers, then select the middle two numbers
      //divide the middle two numbers and assign it to variable med
      else if (len % 2 == 0 && i == med - 1){
	med = (arr[i] + arr[i + 1]) / 2;
	break;
      }
    }
    return med;
  }

  int find_mean(unsigned char *arr, int len){
    //make variables for sum, total elements and mean
    int sum = 0, total = 0;
    //use a loop to traverse *arr, count each element for total elements
    for(total = 0; total < len; total++){
    //in the same loop, add the next element and assign it to sum for each element counted
      sum += arr[total];
    }
    //take both values, divide them, and then return them
    return sum / total;
  }

  int find_minimum(unsigned char *arr, int len){
    sort_array(arr, len);
    return arr[0];
  }

  int find_maximum(unsigned char *arr, int len){
    sort_array(arr, len);
    return arr[len - 1];
  }

  unsigned char *print_array(unsigned char *arr, int len){
    int i;
    for (int i = 0; i < len; i++){
      printf("%d\t\n\n", arr[i]);
    }
    return arr;
  }
  
  void print_statistics(void){
    printf("Array statistics:\n\n");
    printf("Array median: %d\n", med = find_median(test, SIZE));
    printf("Array mean: %d\n", mean = find_mean(test, SIZE));
    printf("Array minimum: %d\n", min = find_minimum(test, SIZE));
    printf("Array maximum: %d\n\n", max = find_maximum(test, SIZE));
  }

  printf("Array list:\n");
  print_array(test, SIZE);
  print_statistics();

  printf("Sorted array list:\n");
  print_array(test, SIZE);
 return 0;
}

/* Add Other Implementation File Code here */
unsigned char *sort_array(unsigned char *arr, int len){
  int i = 0, d = 0, pass = 0; //i: iterator, d: data copied, pass: passes of each element in the array
  for (pass = 0; pass < len - 1; pass++){
    for (i = 0; i < len - 1 - pass; i++){
      if (arr[i] > arr[i + 1]){
	d = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = d;
      }
    }
  }
  
  return arr;
}
