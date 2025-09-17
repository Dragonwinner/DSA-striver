class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int el1=-1,el2=-1;
        int e1f=0,e2f=0;
        for(auto it:hash){
           int  f=it.second;
            int el=it.first;

            if(f>e1f){
                e2f=e1f,el2=el1;
                e1f=f,el1=el;
            }
            else if(f==e1f){
                el1=min(el1,el);
            }
            else if(f>e2f){
                el2=el;
                e2f=f;
            } 
            else if(f==e2f){
                el2=min(el2,el);
            }
        }
        return el2;
    
    }
};