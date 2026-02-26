#include <stdio.h>

int main (){

int arr[] = {3,5,7,2,8};

int largest = arr[0]; // initialize largest as the first slement.

//loop through the array to find the largest element

for (int i=1;i<5; i++){
if (arr[i]> largest) {
    largest=arr[i];
 } 
}
 

// print the largest element 

printf ("largest element = %d", largest);

return 0;
}
