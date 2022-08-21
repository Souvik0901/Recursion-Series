
Approach 1: Optimal Solution
          Time Complexity : 0(N)
           Space Complexity : 0(1)
class Solution{
public:
    int fib(int N){
        
        if(N==0) return 0;
        if(N==1) return 1;
        if(N==2) return 1;
        
        int n1 =1;
        int n2 =1;
        int n3;
        for(int i=3; i<=N; i++)
        {    
            n3= (n1+n2)%10;
            n1= n2;
            n2 =n3;
        }
        return n3;
        
    }
};




Approach : 2 ( Using Recursive Call)
  
     Time Complexity : 0(2^n)
    Space - 0(1)
       
       
class Solution{
public:
    int fib(int N){
        //code here
        if(N<=1)
        return N;
        
        int last = fib(N-1);
        int slast= fib(N-2);
        
        return last+slast;
    }
};




