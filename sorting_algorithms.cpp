/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include "stopwatch.h"
#include "stdlib.h"
#include "stdio.h"

void 	init_random (int *array, unsigned long length)
{
  for (int i = 0; i < length; i++) {
    array[i] = rand();
  }
}
void 	bubble_sort (int *array, unsigned long length)
{
  for (int u = 0; u < length; u++) {
    for (int i = 0; i < length - 1; i++) {
      if (array[i] > array[i + 1]) {
        int temp = array[i + 1];
        array[i + 1] = array[i];
        array[i] = temp;
      }
    }
  }
}
void 	insertion_sort (int *array, unsigned long length)
{
  int i;
   for (i = 1; i < length; i++)
   {
       while (i-1 >= 0 && array[i-1] > array[i])
       {
           array[i] = array[i-1];

       }
       array[i] = array[i];
   }
}
