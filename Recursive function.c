#include <stdio.h>

// Recursive function to print numbers from N to 0
void printNtoZero(int N) {
    // Base case: If N is less than 0, return
    if (N < 0) {
        return;
    }
    
    // Print the current number
    printf("%d ", N);
    
    // Recursively call the function with N-1
    printNtoZero(N - 1);
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    printf("Numbers from %d to 0: ", N);
    printNtoZero(N);
    
    return 0;
}
[21:33, 19/04/2023] Sanjay: 2 part, 2nd code
[21:33, 19/04/2023] Sanjay: #include <stdio.h>

void reverseNum(int* num) {
    int reversed = 0;

    while (*num != 0) {
        int digit = *num % 10;
        reversed = reversed * 10 + digit;
        *num /= 10;
    }

    *num = reversed;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);

    reverseNum(&num);

    printf("Reversed number: %d\n", num);

    return 0;
}
