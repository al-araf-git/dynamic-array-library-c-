#include <iostream>
#include "araf.h"
using namespace std;
using namespace araf;

int main() {
    Araf<char> araf;

    araf.add('A');
    araf.add('B');
    araf.add('C');
    araf.add('D');
    araf.add('E');

    cout << "Display: ";
    araf.display();

    araf.add('F', 'D', 1);
    cout << "Display adding F after D: ";
    araf.display();

    araf.add('G', 'A', 0);
    cout << "Display adding G before A: ";
    araf.display();

    araf.add('H', 'E', 1);
    cout << "Display adding H after E: ";
    araf.display();


    if(araf.search('C') == true)
    {
        cout<<"Found it" << endl;
    }
    else
    {
        cout<<"Not Found" << endl;
    }

    if(araf.search('X') == true)
    {
        cout<<"Found it" << endl;
    }
    else
    {
        cout<<"Not Found" << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Iterator begin and end functions with post increment: ";
    for (auto it = araf.begin(); it != araf.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Iterator begin and end functions with preincrement: ";
    for (auto it = araf.begin(); it != araf.end();++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "After changing the first element with begin and end functions: ";
    araf.display();

    cout << endl;
    cout << endl;


    cout << "Const_iterator cbegin and cend functions with post increment: ";
    for (auto it = araf.cbegin(); it != araf.cend();it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Const_iterator cbegin and cend functions with preincrement: ";
    for (auto it = araf.cbegin(); it != araf.cend();it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Reverse iterator with rbegin and rend functions with post decrement: ";
    for (auto it = araf.rbegin(); it != araf.rend();it--) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Reverse iterator with rbegin and rend functions with pre decrement: ";
    for (auto it = araf.rbegin(); it != araf.rend();--it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Const_reverse_iterator with crbegin and crend function with post decrement: ";
    for (auto it = araf.crbegin(); it != araf.crend();it--) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Const_reverse_iterator with crbegin and crend function with pre decrement: ";
    for (auto it = araf.crbegin(); it != araf.crend();--it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Total elements: ";
    cout << araf.count() << endl;

    araf.remove('C');
    cout << "Removing element C: ";
    araf.display();

}
