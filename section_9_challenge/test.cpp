#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;
int main() {

    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    vector<int> collection{};

    while (true) {
        cout << "\nEnter your choice" << endl;

        char choice{};
        cin >> choice;

        switch (choice) {
        case 'P':
        case 'p':
            if (collection.size() == 0)
                cout << "[] - the list is empty";
            else {
                cout << "[ ";
                for (auto number : collection)
                    cout << number << " ";
                cout << "]";
            }
            break;

        case 'A':
        case 'a':
        {
            cout << "Enter number to Add: ";
            int new_number{};
            cin >> new_number;
            collection.push_back(new_number);

            cout << new_number << " Added" << endl;
        }
        break;

        case 'M':
        case 'm':
        {
            double avr{};
            int sum{};

            if (collection.size() != 0) {
                for (auto number : collection)
                    sum += number;
                avr = sum / collection.size();

                cout << "Avr of youre collection: " << avr << endl;
            }
            else
                cout << "Unable to calculate - no data";

        }
        break;

        case 'S':
        case 's':
        {
            int smallest{ collection.at(0) };

            for (int i{ 0 }; i < collection.size(); i++)
                if (collection.at(i) < smallest)
                    smallest = collection.at(i);


            cout << "The smallest number is: " << smallest << endl;

        }
        break;

        case 'L':
        case 'l':
        {
            int largest{ collection.at(0) };

            for (int i{ 0 }; i < collection.size(); i++)
                if (collection.at(i) > largest)
                    largest = collection.at(i);


            cout << "The largest number is: " << largest << endl;

        }
        break;

        case 'Q':
        case 'q':
            cout << "Goodbye";
            break;

        default:
            cout << "Unknown selection, please try again";
            break;

        }

        if (choice == 'Q' || choice == 'q') break;
    }

    return 0;
}