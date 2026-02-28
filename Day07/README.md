# String Abbreviation Utility

**Language Used:** C++  
**Time Complexity:** O(n × m)  
**Space Complexity:** O(1)

---

## Problem Overview

The task processes multiple words and applies an abbreviation rule:

- If the length of a word is **greater than 10**, it is abbreviated.
- Otherwise, the word is printed as it is.

### Abbreviation Rule

For any word with length > 10:

abbreviation format:

first_character + (length - 2) + last_character

This reduces long words into a compact representation while preserving their identity.

---

## Approach

1. Read integer `n` — number of words.
2. For each word:
   - Read the string.
   - If `length > 10`:
     - Print:
       - First character
       - Number of middle characters (`length - 2`)
       - Last character
   - Otherwise:
     - Print the original word.
3. Print each result on a new line.

The solution uses fast I/O techniques for efficiency.

---

## Complexity Analysis

- **Time Complexity:**  
  O(n × m)  
  Where:
  - `n` = number of words
  - `m` = maximum word length

- **Space Complexity:**  
  O(1)  
  Only one string is processed at a time.

---

## C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) 
        return 0;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if ((int)s.size() > 10)
            cout << s.front() << s.size() - 2 << s.back();
        else
            cout << s;
        if (i + 1 < n) cout << '\n';
    }
    return 0;
}
