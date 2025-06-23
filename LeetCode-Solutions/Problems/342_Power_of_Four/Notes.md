# 342. Power of Four

## Problem Description
Given an integer `n`, return `true` if it is a power of four (i.e., `n = 4^x` for some integer `x`), otherwise return `false`.

**Link**: [LeetCode Problem](https://leetcode.com/problems/power-of-four/)

## Solutions
1. **Iterative Solution** (`Solution_Iterative.cpp`)
   - **Approach**: Adapted from Power of Two; computes powers of 4 (i.e., `4^0, 4^1, 4^2, ...`) until the result equals `n` or exceeds it.
   - **Time Complexity**: O(log n), as we compute powers up to `n`.
   - **Space Complexity**: O(1), using minimal variables.
2. **Recursive Solution** (`Solution_Recursive.cpp`)
   - **Approach**: Adapted from Power of Two; recursively divides `n` by 4 until it reaches 1 or becomes less than 1.
   - **Time Complexity**: O(log n), as each call divides `n` by 4.
   - **Space Complexity**: O(log n) due to the recursion stack.

## Notes
- This problem was straightforward after solving Power of Two, as I reused the same logic with base 4 instead of 2.
- Ensured to handle edge cases like `n <= 0`.
- ## TODO:-
- I have been reading bit manipulation helps solving this problem better will explore it later.
