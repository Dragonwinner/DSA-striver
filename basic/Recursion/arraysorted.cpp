class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            if(nums.size()<=1){
                return true;
            }
            return sort(nums,0,1);
		}
        bool sort(vector<int> &nums,int l,int r){
            if(r>=nums.size())
                return true;
            if(nums[l]>nums[r])
                 return false;

            return sort(nums,l+1,r+1) ;        
        }
};