Define a function maxRot that takes a vector of integers nums as input and returns a long long integer.

Initialize variables sum and ans to 0.

Iterate through the nums vector from 0 to n-1:

Increment sum by the value of nums[i].

Increment ans by i * nums[i].

Initialize index to n-1 and res to ans.

Iterate through the nums vector from 1 to n-1:
Update ans by subtracting ((n-1) * nums[index]) and adding (sum - nums[index]).
Update res to the maximum of res and ans.
Decrement index.

Return res.

In the main function:

Read an integer n from the standard input.
If n is greater than 0, proceed with the following steps, otherwise print 0 and exit.
Read n integers from the standard input and store them in a vector nums.
Call the maxRot function with nums as the argument and store the result in an integer variable rotVal.
Print the value of rotVal to the standard output.