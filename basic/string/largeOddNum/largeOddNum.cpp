 string largeOddNum(string& s){
        //your code goes here
        int idx=-1;
        int i;
        for(i=s.length()-1;i>=0;i--){
            if((s[i]-'0')%2==1){
                idx=i;
                break;
            }
        }
        if(idx==-1) return "";
        i=0;
        while(i<=idx && s[i]=='0') i++;

        return s.substr(i,idx-i+1);
    }