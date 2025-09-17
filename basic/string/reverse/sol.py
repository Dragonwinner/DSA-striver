 def reverseString(self, s):
        #your code goes here
        n=len(s);
        dp=['']*n
        for i in range(n):
            dp[n-1-i]=s[i];
        for j in range(n):
            s[j]=dp[j];