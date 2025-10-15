class Solution{	
	public:
        void reverse(int l,int r,vector<int>& nums){
         if(l>r){
            return ;
         }
         int temp=nums[l];
         nums[l]=nums[r];
         nums[r]=temp;
         reverse(l+1,r-1,nums);
        }
		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            int l=0;
            int r=nums.size()-1;
            reverse(l,r,nums);
            return nums;
            
		}
};