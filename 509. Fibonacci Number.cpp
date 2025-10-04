509. Fibonacci Number
Solved
Easy
Topics
premium lock icon
Companies
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

class Solution {
    public:
    int fib(int n) {
        vector<int> F(n + 1, -1);
        return memoFib(n, F);
    }

private:
    int memoFib(int n, vector<int>& F) {
        if (n <= 1) {
            F[n] = n;
            return n;
        }
        if (F[n-1] == -1)
            F[n-1] = memoFib(n-1, F);
        if (F[n-2] == -1)
            F[n-2] = memoFib(n-2, F);
        F[n] = F[n-1] + F[n-2];
        return F[n];
    }
    
};