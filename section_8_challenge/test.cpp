#include<iostream>
using namespace std;
int main() {
cout << "enter your sum of cents: ";

int cents {0};
cin >> cents;

int dollars {}, quarters {}, dimes {}, nickels{}, pennies{};
 
const int dollar_cost {100};
const int quarter_cost {25};
const int dimes_cost {10};
const int nickel_cost {5};
int balance {0};

dollars = cents/dollar_cost;
balance = cents % dollar_cost;

quarters = balance / quarter_cost;
balance %= quarter_cost;

dimes = balance / dimes_cost;
balance %= dimes_cost;

nickels = balance / nickel_cost;
balance %= nickel_cost;

pennies = balance;

cout << "\nyoure change:" << endl;
cout << "dollars " << dollars << endl;
cout << "quarters " << quarters << endl;
cout << "dimes " << dimes << endl;
cout << "nickels " << nickels << endl;
cout << "pennies " << pennies << endl;

return 0;
}