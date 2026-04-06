# B. Blank Space

Platform: Codeforces  
Difficulty: Easy  
Language Used: C++  
Time Complexity: O(n) per test case  
Space Complexity: O(1)

---

## Problem Summary

You are given a binary array `a` of size `n` consisting only of `0`s and `1`s.

A blank space is defined as a contiguous segment of only `0`s.

Your task is to find the length of the longest blank space.

---

## Key Observation

- We need to find the maximum number of consecutive `0`s
- Whenever a `1` appears, the current count resets to zero
- Keep track of the maximum length during traversal

---

## Approach

1. Initialize:
   - `count_of_zeroes = 0`
   - `maximum_length = 0`

2. Traverse the array:
   - If `a[i] == 0`:
     - Increment `count_of_zeroes`
   - Else:
     - Reset `count_of_zeroes = 0`

3. Update:
   - `maximum_length = max(maximum_length, count_of_zeroes)`

4. Print the result

---

## Complexity Analysis

Time Complexity: O(n) per test case  
(Single traversal of the array)

Space Complexity: O(1)  
(No extra space used)

---

## C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long count_of_zeroes = 0;
        long long maximum_length = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                count_of_zeroes++;
            else
                count_of_zeroes = 0;

            maximum_length = max(maximum_length, count_of_zeroes);
        }

        cout << maximum_length << endl;
    }

    return 0;
}
