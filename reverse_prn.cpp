
#include <iostream>
using namespace std;

int main() {
     int PRN,reverse;
    cout<<"Enter your PRN:"<<endl;
    cin>>PRN;
    while(PRN!=0){
        reverse=PRN%10;
        PRN=PRN/10;
        cout<<reverse;
    }
        
    return 0;
}