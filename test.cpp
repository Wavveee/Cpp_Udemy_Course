#include<iostream>
using namespace std;

int sum_of_digits(int n) {
    // Write your code below this line
    int result {0};
    if (n == 0)
        return 0;
        
        return result += n % 10 + sum_of_digits(n/10);
    // Write your code above this line
}

int main() {

    cout<< sum_of_digits(1234) <<endl;

    // cout << "cmd line check" <<endl;
return 0;
}