

// Approach
// Create a new string by concatenating s with itself, resulting in s + s.
// Check if goal is a substring of s + s.
// If goal is found within s + s, return true; otherwise, return false.

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
            if(s.length()!=goal.length()){
                return false;
            }
            string fullstring=s+s;
            if(fullstring.find(goal)!=string::npos){
                return true ;
            } else {
                return false;
            }
		}
};