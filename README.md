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


## Output:
<p align="center" width="100%">
    <img src="https://github.com/JothishKamal/codechef/blob/main/screenshots/OP_POWTWOADD.png?raw=true">
</p>  
  
    
# STAIRCASE
```c
#include <stdio.h>

int main(void) {
  int testCase; 
  scanf("%d",&testCase); // Getting the number of test cases

  while(testCase>0){
    int height; 
    scanf("%d",&height); // Getting the height of the staircase
    
    int blocks[height];
    for(int i=0; i<height; i++){
      scanf("%d",&blocks[i]); 
    } // Getting the height of the blocks and storing them in an array
    
    /*
    Since 1 is the lowest height of the block, we initialize a temporary variable and set it to 1. 
    In due time, it stores the height of the last block taken from trip 1. 
    This is then used in trip 2 until all the blocks are taken

    Count is incremented each time a block is taken in a trip.
    */
    int count=0,tmp=1;
    for(int i=0; i<2; i++){
      for(int j=0; j<height; j++){
        if(blocks[j]==tmp){ tmp++; count++; }
      }
    }
    
    if(count==height) printf("Yes"); // Prints yes if all the blocks were taken in both the trips.
    else printf("No"); // Prints no if all the blocks weren't taken in both the trips.
    
    testCase--;
  }
}
```  


## Output:
<p align="center" width="100%">
    <img src="https://github.com/JothishKamal/codechef/blob/main/screenshots/OP_STAIRCASE.png?raw=true">
</p>