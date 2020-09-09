#include <iostream>
using namespace std;

int main(){
    double price = 4.5;
    int quantity=0 ;
    cout << "How many do you want?" <<endl;
    cin >> quantity;
    cout << "Your total is: "<< quantity * price<<endl;
    return 0;
}
