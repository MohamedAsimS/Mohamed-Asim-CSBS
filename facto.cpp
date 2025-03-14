#include <iostream>
using namespace std;

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;  
        
    }
    
    return result;
}

int main() {
    int num;
    

    cout << "Enter a number: ";
    cin >> num;
    
    
    cout << "The factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
