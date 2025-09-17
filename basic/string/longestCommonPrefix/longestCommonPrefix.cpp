	string longestCommonPrefix(vector<string>& str){
			//your code goes here
            if(str.empty()) return "";
            int n=str.size();
            int m=str[0].size();
            sort(str.begin(),str.end());
            string first=str[0];
            string last=str[n-1];
            string ans="";
            for(int i=0;i<min(first.size(),last.size());i++){
                if(first[i]!=last[i]) break;
                ans+=first[i];
            }
            return ans;

		}