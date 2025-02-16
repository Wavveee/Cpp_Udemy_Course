#include<iostream>
#include<string>
#include <cctype>

using namespace std;
int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "enter your message: ";
        string clean_message{};
        getline(cin, clean_message)  ;

        string cripted_message{};
    
    for(auto c : clean_message){
        size_t index = alphabet.find(c);

       if(index != string::npos){
        cripted_message += key.at(index);
       }else{
        cripted_message += c;
       }
    }

    cout << "youre criptrd message: " << cripted_message <<endl;

return 0;
}