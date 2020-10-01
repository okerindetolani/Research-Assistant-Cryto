// QUESTION 2B
//WRITTEN IN C++
#include <iostream>

using namespace std;


   
bool isPrime(int n){
      bool flag= true;
      for(int i=2 ;i<=2 ;i++){
      if(n % i==0){
      flag=false;
      break;
      
  }
  }
  return flag;
}

  
  bool isPowerOfTwo(int n) 
{ 
    return (n && !(n & (n - 1))); 
}
bool isProthNumber(int n) 
{ 
  
    int k = 1; 
    while (k < (n / k)) { 
  
        // check if k divides n or not 
        if (n % k == 0) { 
  
            // Check if n/k is power of 2 or not 
            if (isPowerOfTwo(n / k)) 
                return true; 
        } 
  
        // update k to next odd number 
        k = k + 2; 
    } 
  
    // If we reach here means 
    // there exists no value of K 
    // Such that k is odd number 
    // and n/k is a power of 2 greater than k 
    return false; 
   
}

  int  main () {
    
      int n =3456;

      
  if ((isProthNumber(n-1)) && isPrime(n)==true)
      cout <<n <<" is a proth prime";
    else
        cout <<n <<" is not a proth prime"; 
      
    return 0; 
    
}