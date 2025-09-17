    def longestCommonPrefix(self, st):
        #your code goes here
        if not st:
            return ""
       
        for i in range(len(st[0])):
            commonstr=st[0][i]
            for j in range(1,len(st)):
                if i>=len(st[j]) or st[j][i]!=commonstr:
                    return st[0][:i];      
        return st[0];  