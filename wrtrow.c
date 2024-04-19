/*
 * wrtrow
 *
 * usage:   (1) passed an array of pointers to columns (ptable),
 *          (2) passed an array of columns to output in order from 
 *          low to high index (coltab)
 *          (3) passed count of output columns in coltab
 *          (4) output each column as pointed at by each entry in ptable the
 *          order the elements are selected is the contents of coltab
 *          you can use printf to output the column data and the delimiters
 *
 * arguments:
 *  ptable  points at array of pointers each element points at a column data
 *  coltab  points array of ints, each element is an index in ptable in output
 *          order
 *  cnt     number of elements in array coltab
 *  delim   the output field delimiter to use
 *
 * Return values:
 *          -1 if if an error is detected (printf fails)
 *          otherwise returns the number of columns printed
 *
 * error messages:
 *          this function does not write any error messages
 */

#include "version.h"
#ifndef MYWRTROW
#warning("WARNING - USING THE SOLUTION writerow.c NOT MY CODE")
#else
#include <stdio.h>
#include "wrtrow.h"

int
wrtrow(char **ptable, int *coltab, int cnt, char delim)
        
{
    // replace with your code

}
#endif  // do not delete this line
