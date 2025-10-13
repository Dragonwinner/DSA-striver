class Solution{	
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
            return sum(nums,0);

		}
        int sum(vector<int>&nums,int l){
            if(l>=nums.size()) return 0;
            return nums[l]+sum(nums,l+1);
        }
};