
Start
Declare and initialize a variable ans to 0.
Iterate over each bit position from 0 to 31 (assuming integers are 32-bit).
a. Initialize two variables, ones and zeros, to 0.
b. Iterate over each element a in the input vector v.
i. If the pos-th bit of a is 1, increment ones.
ii. Otherwise, increment zeros.
c. Calculate the product of ones and zeros and add it to ans.
Return ans.
In the main function:
a. Read an integer n from the standard input.
b. Declare an empty vector v to store integers.
c. Iterate n times:
i. Read an integer a from the standard input.
ii. Add a to the vector v.
d. Call the inBetweenHamDist function with vector v and store the result in ans.
e. Print ans to the standard output.
End.