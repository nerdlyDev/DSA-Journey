class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> answer(n, n); // Initialize with a large value.

        // Iterate from left to right.
        int prev = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                prev = i;
            }
            if (prev != -1) {
                answer[i] = min(answer[i], abs(i - prev));
            }
        }

        // Iterate from right to left.
        prev = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                prev = i;
            }
            if (prev != -1) {
                answer[i] = min(answer[i], abs(i - prev));
            }
        }

        return answer; 
    }
};