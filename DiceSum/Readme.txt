The Algorithm Steps are as follows:
Input: Take an integer input sum representing the target sum to achieve using the dice.

Initialize: Create an array dp of size sum + 1 to store the number of ways to achieve each sum.
Initialize all values of dp to -1 to indicate that the number of ways for each sum has not been calculated yet.

Recursive Function: Define a recursive function findWaysOfSum that takes two arguments: the current sum sum 
and the array dp to store results.

Base Case: If the current sum is 0, return 1, indicating that there is one way to achieve the sum (by not rolling the dice).

Memoization: If the number of ways to achieve the current sum has already been calculated, return 
the value from the dp array to avoid redundant calculations.

Iterative Check: Iterate from 1 to 6 (the possible outcomes of a dice roll) and for each outcome, recursively call 
findWaysOfSum with the updated sum (current sum - i) and add the result to the cnt variable.

Store Result: Store the total number of ways (cnt) to achieve the current sum in the dp array and return this value.

Output: In the main function, after taking the input sum, call findWaysOfSum with the initial sum and the dp array. 
Print the result, which represents the total number of ways to achieve the input sum using a dice.

Complexity: The time complexity of this algorithm is O(sum * 6) due to the nested loop iterating over each possible 
outcome of the dice for each sum. The space complexity is O(sum) due to the dp array.