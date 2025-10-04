70. Climbing Stairs
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 class Solution {
public:
    int climbStairs(int n) {
        int t1=1,t2=2,s=0;
        if(n<=2) {
            return n;
        }
        for(int i = 3; i<=n; i++) {
            s=t1+t2;
            t1=t2;
            t2=s;
        }
        return s;
            
        }
    }; 