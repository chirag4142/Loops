#include<iostream>
using namespace std;

int main(){
    int i=1234;
    int password;
    while(true){
        cout << "Enter password:";
        cin >> password;
        if(password == i){
            cout << "Access granted" << endl;
            break;
        }else {
            cout << "Invalid password. Please try again." << endl;
        }
    }
    
    return 0;
}
