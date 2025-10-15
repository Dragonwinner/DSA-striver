bool palindromeCheck(string& s){
    //your code goes here
    int r=s.size()-1;
    int l=0;
    return check(l,r,s);

}
bool check(int l,int r,string& s){
    if(l>r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return check(l+1,r-1,s);
}