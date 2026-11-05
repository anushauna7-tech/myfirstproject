#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    // Move pointers towards the middle
    while (left < right) {
        // If characters don't match, it's not a palindrome
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    // If pointers meet without any mismatch
    return true;
}

int main() {
    char*inputString = "abc";


    if (isPalindrome(inputString)) {
        printf("\"%s\" is a palindrome.\n", inputString);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", inputString);
    }

    return 0;
}
//  abc 
//  aba == 