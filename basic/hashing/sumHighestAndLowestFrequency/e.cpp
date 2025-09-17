int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>hash;
        int maxe=0,mine=n;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(auto it:hash){
            int e=it.first;
            int f=it.second;
            maxe=max(maxe,f);
            mine=min(mine,f);
        }
        return maxe+mine;
        
    }