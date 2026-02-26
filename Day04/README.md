# A. We Need the Zero

**Platform:** Codeforces  
**Topic:** Bit Manipulation (XOR)  
**Difficulty:** Easy  

---

## Problem Summary

Given an array `a` of non-negative integers, choose an integer `x` such that:

b1 ⊕ b2 ⊕ ... ⊕ bn = 0  

where:

bi = ai ⊕ x  

Print such an `x` (0 ≤ x < 2⁸) if it exists, otherwise print `-1`.

---

## Approach

Let:

total_xor = a1 ⊕ a2 ⊕ ... ⊕ an  

After applying XOR with `x` to all elements:

(a1 ⊕ x) ⊕ (a2 ⊕ x) ⊕ ... ⊕ (an ⊕ x)  
= total_xor ⊕ (x repeated n times)

### Case 1: n is Odd
- XOR of `x` repeated odd times = `x`
- So: total_xor ⊕ x = 0
- Therefore: x = total_xor

### Case 2: n is Even
- XOR of `x` repeated even times = 0
- Expression becomes total_xor
- If total_xor == 0 → answer is 0
- Otherwise → -1

---

## Final Logic

- If n is odd → print total_xor
- If n is even and total_xor == 0 → print 0
- Else → print -1

---

## Complexity

Time Complexity: O(n) per test case  
Space Complexity: O(1)

---

## Implementation (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int total_xor = 0, val;

        for (int i = 0; i < n; i++) {
            cin >> val;
            total_xor ^= val;
        }

        if (n % 2 == 1) {
            cout << total_xor << "\n";
        } else {
            if (total_xor == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}
```

---

## Key Learning

- XOR parity behavior (even vs odd repetitions)
- Mathematical observation simplifies the solution
- Clean bit manipulation logic
- Avoid brute-force approach


### Daily Codeforces Practice  
Consistency > Motivation
