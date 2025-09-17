 def sumHighestAndLowestFrequency(self, nums):
        n=len(nums)
        vis=[False]*pow(10,4)
        maxf=0
        minf=n;
        for i in range(n):
            if (vis[nums[i]]==False):
                cnt=0;
                vis[nums[i]]=True
                for j in range(n):
                    if nums[i]==nums[j]:
                        cnt+=1
                maxf=max(maxf,cnt);
                minf=min(minf,cnt)
        return maxf+minf 