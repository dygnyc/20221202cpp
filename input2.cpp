#include <iostream>
#include <string>

using namespace std;

void greeting(){
    cout<<"Welcome\nyou\nfucking badass!"<<endl;
}

int main()
{

    greeting();
    
    int inputNum;
    string inputString;

    cout << "enter a number" << endl;

    cin >> inputNum;

    cout << "enter your name" << endl;

    cin >> inputString;

    cout << inputString << " entered " << inputNum << endl;

    return 0;
}