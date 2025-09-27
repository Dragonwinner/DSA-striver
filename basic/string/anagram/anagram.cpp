class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			//your code goes here
            /*
            method1:-
            Intuition
            The letters of an anagram should form identically sequences if alphabetically sorted. By furthering this thought process a method to check for anagrams would be sorting both strings. By sorting both strings and then comparing them, we can easily determine if they contain the same characters in the same frequencies.

            Approach
            Sort the characters of both strings using an inbuilt sort function, so that if they are anagrams, the sorted strings will be identical.

            Compare the sorted versions of both strings. If they match, the original strings are anagrams; otherwise, they are not.

            Return true if the sorted strings are identical, otherwise return false.

            */
            if(s.length()!=t.length()) return false;
            vector<int>count(26,0);
            for(char c:s)count[c-'a']++;
            for(char c:t)count[c-'a']--;
            for(int i:count){
                if(i!=0) return false;
            }
            return true;
          

		}
};