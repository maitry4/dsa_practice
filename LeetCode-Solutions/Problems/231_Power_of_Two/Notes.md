# 231. Power of Two

## Problem Description
Given an integer `n`, return `true` if it is a power of two (i.e., `n = 2^x` for some integer `x`), otherwise return `false`.

**Link**: [LeetCode Problem](https://leetcode.com/problems/power-of-two/)

## Solutions
1. **Iterative Solution** (`Solution_Iterative.cpp`)
   - **Approach**: Uses a while loop to compute powers of 2 (i.e., `2^0, 2^1, 2^2, ...`) until the result equals `n` or exceeds it.
   - **Time Complexity**: O(log n), as we compute powers up to `n`.
   - **Space Complexity**: O(1), as we only use a few variables.
2. **Recursive Solution** (`Solution_Recursive.cpp`)
   - **Approach**: Recursively divides `n` by 2 until it reaches 1 (a power of 2) or becomes less than 1 (not a power of 2).
   - **Time Complexity**: O(log n), as each recursive call divides `n` by 2.
   - **Space Complexity**: O(log n) due to the recursion stack.

## Notes
- The iterative solution was my first attempt and felt intuitive.
- The recursive solution was taught by my teacher and is more concise but uses more memory due to the call stack.
- Both solutions handle edge cases (e.g., `n <= 0`) correctly.
