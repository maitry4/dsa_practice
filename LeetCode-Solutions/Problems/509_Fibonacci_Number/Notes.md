# 509. Fibonacci Number

## Problem Description
The Fibonacci numbers, commonly denoted `F(n)`, form a sequence such that each number is the sum of the two preceding ones, starting from `0` and `1`. That is:
- `F(0) = 0`
- `F(1) = 1`
- `F(n) = F(n-1) + F(n-2)` for `n > 1`.

Given `n`, return the `n`th Fibonacci number.

**Link**: [LeetCode Problem](https://leetcode.com/problems/fibonacci-number/)

## Solution
- **File**: `Solution_Recursive.cpp`
- **Approach**: Uses recursion to compute the Fibonacci number by directly implementing the recursive formula `F(n) = F(n-1) + F(n-2)`.
- **Time Complexity**: O(2^n) due to the exponential growth of recursive calls (each call branches into two more).
- **Space Complexity**: O(n) for the recursion stack.

## Notes
- The recursive solution is straightforward but inefficient for large `n` due to repeated calculations.
- My teacher mentioned that iterative and dynamic programming (DP) approaches are more efficient (to be explored later).
- Plan to add iterative and DP solutions to this directory when I learn DP.
