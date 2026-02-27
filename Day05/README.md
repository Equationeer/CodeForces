# C. Prepend and Append (Codeforces)

## Problem Overview

Timur initially had a binary string (possibly empty). He performed the following operation several times:

- Add `0` to one end of the string.
- Add `1` to the other end of the string.

This operation increases the string length by 2 in each step.

Given the final binary string, the task is to determine the **minimum possible length** of the original string before any operations were performed.

---

## Key Observation

Each operation adds two characters:
- One `0` on one side
- One `1` on the opposite side

Therefore:
- If the first and last characters of the final string are different (`0` and `1`), they must have been added in one operation.
- We can remove such pairs from both ends.
- Continue this process while the first and last characters are different.

The remaining substring (if any) represents the shortest possible original string.

---

## Algorithm

For each test case:

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. While `left < right`:
   - If `s[left] != s[right]`, reduce answer by 2 and move both pointers inward.
   - Otherwise, stop.
3. The remaining length is the shortest possible original string length.

---

## Time Complexity

- Each test case runs in **O(n)**
- Overall complexity: **O(t × n)**  
  where:
  - `t ≤ 100`
  - `n ≤ 2000`

This satisfies the constraints efficiently.

---

## Implementation (C++)

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
        string s; 
        cin >> s;
        long long ans = n;
        long long left = 0, right = n - 1;
        while (left <= right)
        {
            if (s[left] != s[right])
                ans -= 2; 
            else
                break; 
            left++; 
            right--; 
        }
        cout << ans << endl;
    }
    return 0;
}
