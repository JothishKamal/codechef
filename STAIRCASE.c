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

