#if 0
70. Climbing Stairs
Easy

1838

69

Favorite

Share
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
Accepted
358,539
Submissions
825,041
#endif

int climbStairs(int n) {
#if 1 /* dynamic programming */
    int *ways, ii;
    
    ways = (int *)malloc(sizeof(int) * (n + 1));
    ways[0] = 1;
    ways[1] = 1;
    for (ii = 2; ii <= n; ii++) {
        ways[ii] = ways[ii - 1] + ways[ii - 2];
    }
    return ways[n];
#else
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return climbStairs(n - 1) + climbStairs(n - 2);
#endif
}
