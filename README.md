Find Largest Element in an Array (C Program)

This project contains a simple C program that finds the largest element in an array.

📖 Description

The program:

Declares and initializes an integer array

Assumes the first element is the largest

Compares it with the remaining elements

Updates the largest value when a bigger element is found

Prints the largest element

This is a basic example useful for beginners learning arrays and loops in C.

⚙️ How It Works

Initialize an array with values.

Store the first element as the largest.

Traverse the array using a loop.

Compare each element with the current largest.

Update the largest value if a bigger number is found.

Print the final largest value.

🖥️ Program Code
#include <stdio.h>

int main (){

    int arr[] = {3,5,7,2,8};

    int largest = arr[0]; // initialize largest as the first element.

    // loop through the array to find the largest element
    for (int i = 1; i < 5; i++){
        if (arr[i] > largest) {
            largest = arr[i];
        } 
    }

    // print the largest element 
    printf("Largest element = %d", largest);

    return 0;
}
▶️ How to Run
Step 1: Compile the program
gcc largest.c -o largest
Step 2: Run the program
./largest
📝 Output
Largest element = 8
🎯 Features

Beginner-friendly code

Uses arrays and loops

Simple comparison logic

Easy to understand

📚 Author

Ritik Chauhan

If you want, I can also create a version where the user inputs the array elements dynamically.
