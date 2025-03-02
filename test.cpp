#include<iostream>
#include <string>
using namespace std;




string reverse_string(const std::string &str) {
    string reversed;
    const char* start = &str[0];
    const char* end = &str[str.length() - 1];


    while(start <= end) {
        reversed.push_back(*end);
        
        --end;
    }

    cout << reversed <<endl;

    return reversed;
}

int main() {
    string input = "bueno--bueno";

    reverse_string(input);
}

//-----------------------------------------

// void reverse_array(int* arr, int size) {
//     size_t start = 0;
//     size_t end = size - 1;

//     while (start < end) {

//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }


// }

// int main() {

//     int test_arr[5] = { 4, 8, 9, 60, 53 };
//     int* arr_ptr = test_arr;
//     int size = sizeof(test_arr) / sizeof(test_arr[0]);

//     reverse_array(arr_ptr, size);

//     for (size_t i = 0; i < size; i++) {
//         cout << test_arr[i] << " ";
//     }

//     return 0;
// }

//-----------------------------------------

// int sum_of_digits(int n) {
//     // Write your code below this line
//     int result {0};
//     if (n == 0)
//         return 0;

//         return result += n % 10 + sum_of_digits(n/10);
//     // Write your code above this line
// }

// int main() {

//     cout<< sum_of_digits(1234) <<endl;

//     // cout << "cmd line check" <<endl;
// return 0;
// }