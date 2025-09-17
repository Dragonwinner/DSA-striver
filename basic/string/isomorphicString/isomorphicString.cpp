
// Approach:
// Initialize two arrays of size 256 (to cover all ASCII characters) to store the last seen positions of characters in both strings. This helps in tracking the mapping between characters.
// Iterate through each character in the strings simultaneously. For each character, compare the last seen positions stored in the arrays. If the positions do not match, it indicates an inconsistent mapping, and the strings are not isomorphic.
// If the positions match, update the arrays with the current index (incremented by 1 to avoid the default value of 0). This ensures that the mapping is consistent throughout the strings.
// After completing the iteration, if no inconsistencies in the mappings are found, the strings are confirmed to be isomorphic. If any inconsistency is found during the iteration, return false immediately.
/*
    Complexity Analysis:
Time Complexity: O(N) where N is the length of the input strings, due to the single loop iterating through each character

Space Complexity: O(k) O(1) since the space used by the arrays is constant (256 fixed size) regardless of input size*/
class Solution {
public:
    bool isomorphicString(string s, string t) {
    	//your code goes here
        int Smap[256] ={0},Tmap[256] = {0};
        int n=s.size();
        for(int i =0; i< n;++i){
            if(Smap[s[i]] !=Tmap[t[i]]) return false;
            Smap[s[i]] =i+1;
            Tmap[t[i]] =i+1;
        }
        return true;

    }
};