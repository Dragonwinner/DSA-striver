void reverseString(vector<char>& s){
			//your code goes here
            int n=s.size();
            int l=0,r=n;
            int i=0;
            while(l<r){
                swap(s[n-1-i],s[i]);
                l++,r--,i++;
            }
		}