#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int digit;

  
    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

  
    return originalNum == reversedNum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    

    if (isPalindrome(num)) {
        cout << num << " is a Palindrome." << endl;
    } else {
        cout << num << " is not a Palindrome." << endl;
    }

    return 0;
}
