Include necessary headers.

Define a function count_subgrid:

Input: 2D vector color representing a grid of integers (0 or 1).
Output: Integer representing the total count of subgrids where both rows have all 1s in the same columns.
Steps:
Initialize subgrids to 0.
Iterate over all pairs of distinct rows (a, b) in color.
For each pair (a, b):
Initialize count to 0.
Iterate over all columns i in the rows a and b.
If color[a][i] and color[b][i] are both 1, increment count.
Add ((count-1) * count)/2 to subgrids.
Return subgrids.
In the main function:

Read an integer n from the standard input.
Create a 2D vector v of size n x n and initialize all elements to 0.
Iterate over all rows and columns of v, reading integers from the standard input to fill v.
Call count_subgrid(v) and store the result in subgrids.
Print the value of subgrids to the standard output.
Return 0 to indicate successful completion.