# POWTWOADD
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int testCase;
  cin>>testCase; // Getting the number of test cases
  for(int i=0;i<testCase;i++){ 
    int n,k; 
    cin>>n>>k; // Getting the values of n and k
  
    int diff=k-n; // Finding the difference between n and k
    /*
    The difference between the two numbers is the sum to be added.
    We can represent this number in terms of binary.
    Ex: 8-3=5 => 5=101
    If we convert this number back to decimal(2^0+2^2=5),
    we can see that the number of terms is actually the number of ones.
    
    So we increment count every time we get a remainder of 1.
     */
	  int count=0; // Initializing count(m) to zero
	  while(diff>0){
      if(diff%2==1) count++; // Incrementing count(m)
		  diff/=2;
    }
    cout<<count; // Displaying count(m) terms
  }
}
```