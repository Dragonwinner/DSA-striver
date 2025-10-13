class Solution{	
public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int n=s.size();
        int l=0,r=n-1;
        rs(l,r,s);
        return s;
	}
    void rs(int l, int r,vector<char> &s){
        if(l>=r){
            return ;
        }
        char t=s[l];
        s[l]=s[r];
        s[r]=t;
        rs(++l,--r,s);
    }
};