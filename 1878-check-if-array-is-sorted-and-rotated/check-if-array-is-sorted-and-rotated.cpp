class Solution {
public:
    bool check(vector<int>& A) {
        int n=A.size();
        vector<int>B(n);
        vector<int>C=A;
        sort(A.begin(),A.end());
        int x=0;
        x=x%n;
        for (int x = 0; x < n; x++) {
            for (int i = 0; i < n; i++) {
                B[i] = A[(i + x) % n];
            }
            if (B == C) {
            return true;
            }
        }return false;
    }
};