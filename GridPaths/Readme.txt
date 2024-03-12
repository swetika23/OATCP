Algorithm for this problem:
Input: Take an integer n representing the size of the grid (n x n). Read a grid of characters representing the path, where '.' 
denotes an empty cell and '*' denotes a blocked cell.

Initialize: Create a 2D vector dp of size (n+1) x (n+1) to store the number of ways to reach each cell. Initialize dp[1][1] 
to 1, as there is one way to reach the starting cell.

Dynamic Programming: For each cell (i, j) in the grid:

If the cell is blocked (s[i - 1][j - 1] == '*'), set dp[i][j] to 0.
Otherwise, update dp[i][j] as the sum of ways to reach the cell from the top and from the left (dp[i - 1][j] and dp[i][j - 1]), 
taking modulo MOD.
Output: Print the number of ways to reach the bottom-right cell (dp[n][n]), which represents the number of paths from the top-left 
to the bottom-right cell in the grid, avoiding blocked cells.

Complexity: The time complexity of this algorithm is O(n^2) since we iterate over each cell in the grid once. The space complexity 
is also O(n^2) due to the dp array.