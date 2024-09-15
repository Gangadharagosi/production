#include <stdio.h>

// Function prototype
void addNumbers(int *a, int *b, int *result);

int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to add the numbers by passing their addresses
    addNumbers(&num1, &num2, &sum);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Function to add two numbers using pointers
void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;  // Dereference the pointers to get the values and perform the addition
}
