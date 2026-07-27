class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if (n % 2 != 0) return false;  // odd length can never be valid

        int top = 0;  // acts as the stack pointer, reusing s as storage

        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') {
                s[top++] = c;  // "push" by writing into s itself
            } else {
                if (top == 0) return false;  // nothing to match
                char open = s[top - 1];      // "peek" at top of stack
                if ((c == ')' && open != '(') ||
                    (c == ']' && open != '[') ||
                    (c == '}' && open != '{'))
                    return false;
                top--;  // "pop"
            }
        }

        return top == 0;
    }
};