Input: Accept a string num and an integer k from the user.

Function Definition: Define a function removeKDigits that takes a string num and an integer k as input and returns a string.

Initialize Stack: Create a stack st to store characters.

Process Each Digit: Iterate through each character c in the string num:

While the stack is not empty, k is greater than 0, and the top element of the stack is greater than the current character c, pop elements from the stack and decrement k.
If the stack is empty or the current character c is not '0', push c onto the stack.
Remove Remaining Digits: After iterating through all characters, if there are still digits to remove (k > 0), pop elements from the stack k times.

Build the Result String: Create an empty string ans.

While the stack is not empty, append the top element of the stack to the ans string and pop the stack.
Reverse the Result: Reverse the ans string.

Check for Empty Result: If ans is empty, set it to "0".

Output: Output the final ans string.

Main Function:

Read a string str and an integer k from the user.
Call the removeKDigits function with str and k as arguments and store the result in ans.
Output the final ans string.