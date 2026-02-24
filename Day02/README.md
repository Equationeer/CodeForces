## Day 02 – Sum of Digits

### Platform
Codeforces

---

## Problem Overview

For each test case, you are given an integer `n`.  
Your task is to compute and output the sum of its digits.

---

## Constraints

- 1 ≤ t (number of test cases)  
- `n` is a non-negative integer  
- The number of digits in `n` fits within standard integer limits  

---

## Approach

To compute the sum of digits of a number:

1. Initialize a variable `ans = 0`
2. While `n` is greater than 0:
   - Extract the last digit using `n % 10`
   - Add it to `ans`
   - Remove the last digit using integer division `n /= 10`
3. Output `ans`

This method efficiently processes each digit exactly once.

---

## Algorithm

For each test case:

1. Read integer `n`
2. Initialize `ans = 0`
3. While `n > 0`:
   - `rem = n % 10`
   - `ans += rem`
   - `n /= 10`
4. Print `ans`

---

## Implementation (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ans = 0;

        while (n) {
            int rem = n % 10;
            ans += rem;
            n /= 10;
        }

        cout << ans << endl;
    }
    return 0;
}
