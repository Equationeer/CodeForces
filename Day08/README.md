# Problem Solution – Mathematical Feasibility Check

**Language Used:** C++  
**Time Complexity:** O(1) per test case  
**Space Complexity:** O(1)

---

## Problem Overview

For each test case, two integers `x` and `y` are provided.  
We must determine whether a valid solution exists under certain derived mathematical constraints.

The solution is based on transforming the given values into an algebraic expression and checking feasibility conditions.

---

## Core Logic

The approach computes:

s = x + 4 * y

Then:

1. If `s` is negative → no valid solution.
2. If `s` is not divisible by 3 → no valid solution.
3. Otherwise:
   - Compute `s = s / 3`
   - Define:
     - `lo = max(0, y)`
     - `hi = s / 2`
   - If `lo ≤ hi` → print `"YES"`
   - Else → print `"NO"`

---

## Interpretation

The logic ensures:

- The derived expression satisfies divisibility conditions.
- The computed range `[lo, hi]` represents feasible bounds for a valid integer solution.
- If the feasible interval is non-empty, a valid configuration exists.

This makes the solution efficient and mathematically precise.

---

## Complexity Analysis

- **Time Complexity:**  
  O(1) per test case  
  Only constant-time arithmetic operations are performed.

- **Space Complexity:**  
  O(1)  
  No additional data structures are used.

This solution is highly efficient and works well even for large numbers of test cases.

---

## C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        
        long long s= x+4LL*y;
        if(s<0||s%3!=0){
            cout<<"NO\n";
            continue;
        }
         s/=3;

         long long lo = max(0LL,y);
         long long hi = s/2;
         cout<<(lo<=hi ? "YES\n" : "NO\n");
     }
    
    return 0;
}
