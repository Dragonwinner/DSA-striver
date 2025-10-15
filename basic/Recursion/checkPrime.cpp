class Solution{	
	public:
        bool prime(int i,int num){
            if(i*i >num)
               return true;
            if(num%i==0)
                return false ;  

            return prime(i+1,num);  
        }
		bool checkPrime(int num){
			//your code goes here
            if(num<2) return false;
            int i=2;
            return prime(i,num);
            
		}
};