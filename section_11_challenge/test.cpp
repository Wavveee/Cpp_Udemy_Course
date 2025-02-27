#include<iostream>
#include<vector>
#include<typeinfo>
#include <cctype>
using namespace std;

void show_menu();
void options_handler(vector<int>& numbers);
void print_numbers(vector<int>& numbers);
void add_num(vector<int>& numbers);
void print_mean( vector<int>& numbers);
void print_smallest( vector<int>& numbers);
void print_largest( vector<int>& numbers);

int main() {

    vector<int> collection{};

    show_menu();
    options_handler(collection);

    return 0;
}

void show_menu() {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "O - Show menu again" << endl;
    cout << "Q - Quit" << endl;
}

void print_numbers(vector<int>& numbers) {
    if (numbers.size() == 0)
        cout << "[] - the list is empty";
    else {
        cout << "[ ";
        for (auto number : numbers)
            cout << number << " ";
        cout << "]";
    }
}

void add_num(vector<int>& numbers) {
    cout << "Enter number to Add: ";
    int new_number{};
    cin >> new_number;
    numbers.push_back(new_number);

    cout << new_number << " Added" << endl;
}

void print_mean(vector<int>& numbers) {
    double avr{};
    int sum{};

    if (numbers.size() != 0) {
        for (auto number : numbers)
            sum += number;

        double avr = static_cast<double>(sum) / numbers.size();
        cout << "Mean of your collection: " << avr << endl;
    }
    else
        cout << "Unable to calculate - no data";
}

void print_smallest(vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "No numbers in the list\n";
        return;
    }

    int smallest{ numbers.at(0) };
    for (int i{ 0 }; i < numbers.size(); i++)
        if (numbers.at(i) < smallest)
            smallest = numbers.at(i);


    cout << "The smallest number is: " << smallest << endl;

}
void print_largest(vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "No numbers in the list\n";
        return;
    }

    int largest{ numbers.at(0) };
    for (int i{ 0 }; i < numbers.size(); i++)
        if (numbers.at(i) > largest)
            largest = numbers.at(i);


    cout << "The largest number is: " << largest << endl;

}

void options_handler(vector<int>& numbers) {
    while (true) {
        cout << "\nEnter your choice" << endl;

        char choice{};
        cin >> choice;
        choice = std::toupper(choice);

        switch (choice) {
        case 'P':
            print_numbers(numbers);
            break;

        case 'A':
            add_num(numbers);
            break;

        case 'M':
            print_mean(numbers);
            break;

        case 'S':
            print_smallest(numbers);
            break;

        case 'L':
            print_largest(numbers);
            break;

        case 'Q':
            cout << "Goodbye";
            break;

        case 'O':
            show_menu();
            break;

        default:
            cout << "Unknown selection, please try again";
            break;

        }

        if (choice == 'Q' || choice == 'q') break;
    }
}
