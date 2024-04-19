/*
 * splitrow
 * 
 * usage:   input buffer in csv format, builds table of pointers to each field
 *          (1) walk the input row passed in buf. Set each element in the array
 *          of pointers (ptable) to point at the start of each column.
 *          (2) Replace the delimiter that follows each column to be a '\0' to
 *          terminate that row (making it a string)
 *          (3) Make sure you do not go past cnt entries in the ptarrays (where
 *          cnt is the expected number of columns in the row). When called with
 *          the header row, cnt will be the allocated size of the array ptable
 *          so the return value from this function (the number of columns found
 *          in the row buffer) will be used to determine the correct number of
 *          rows in every subsequent row in the input.
 *
 * argument description:
 *
 *  buf     csv format row stored in an array of characters, '\0' terminated
 *  ptable  points at array of pointers each element points at a data field
 *          in the row
 *  cnt     expected number cols in row. If buf contains more than this
 *          number of columns then return cnt + 1
 *  delim   the field delimiter             
 *
 * return values:
 *         -1 if row is missing a newline (fgets truncated buf) (or other error)
 *         otherwise return the number of columns found in the input row buf
 *
 * error messages:
 *          this function does not write any error messages
 */

#include "version.h"
#ifndef MYSPLITROW
#warning("WARNING - USING THE SOLUTION splitrow.c NOT MY CODE")
#else
#include <stdio.h>
#include "splitrow.h"

int
splitrow(char *buf, char **ptable, int cnt, char delim)
{
    // replace with your code
}
#endif // do not delete this line
