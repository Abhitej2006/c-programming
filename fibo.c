#include<stdio.h>
void main()
int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series to sum: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    long long sum = 0;
    long long a = 1, b = 1; // Starting values for Fibonacci series

    // Calculate the sum of Fibonacci numbers
    for (int i = 1; i <= n; i++) {
        sum += a; // Add the current Fibonacci number to the sum
        long long temp = a; // Store the current value of a
        a = b; // Move to the next Fibonacci number
        b = temp + b; // Update b to the next Fibonacci number
    }

    printf("The sum of the first %d Fibonacci numbers is: %lld\n", n, sum);
    return 0;
}
