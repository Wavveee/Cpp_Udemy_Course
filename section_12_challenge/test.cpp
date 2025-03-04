#include <iostream>
using namespace std;

void print(const int array[],size_t size);
int* apply_all(const int arr_1[], size_t size_1, int arr_2[], size_t size_2);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    

    cout << "Result: " ;
    print(results, results_size);
    delete[] results;

    cout << endl;

    return 0;
}

void print(const int array[],size_t size){
    cout << "[";
    for (size_t i=0; i < size; i++) {
        cout << " " << array[i]; 
    }
    cout << " ]"<< endl;
}

int* apply_all(const int arr_1[], size_t size_1, int arr_2[], size_t size_2) {
    int* result = new int[size_1 * size_2];
    size_t index = 0;

    for(size_t i=0; i < size_2; i++) {
        for(size_t j=0; j < size_1; j++){
            result[index++] = arr_2[i] * arr_1[j];
        }
    }

    return result;
}