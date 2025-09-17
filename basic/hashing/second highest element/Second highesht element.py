---
description: 'Description of the custom chat mode.'
---python----
 class Solution:
    def secondMostFrequentElement(self, nums):
        n=len(nums)
        vis=[False]*pow(10,4);
        el1=-1
        el2=-1
        e1f=0
        e2f=0
        for i in range(n):
            if(vis[nums[i]]==False):
                
                cnt=0
                for j in range(n):
                    if(nums[j]==nums[i]):
                        cnt=cnt+1
                        vis[nums[i]]=True
                if(cnt>e1f):
                    el2=el1
                    e2f=e1f
                    el1=nums[i]
                    e1f=cnt 
                elif(cnt==e1f  ):
                    el1=min(el1,nums[i] )   
                elif(cnt>e2f):
                    el2=nums[i]
                    e2f=cnt;
                elif(cnt==e2f ):
                    el2=min(el2,nums[i])   

        return el2                        


---