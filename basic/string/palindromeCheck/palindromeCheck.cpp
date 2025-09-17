bool palindromeCheck(string& s){
			//your code goes here
            int l=0,r=s.size()-1;
            while(l<r){
                if(s[l]!=s[r]) return false;
                l++,r--;
            }
            return true;


		}