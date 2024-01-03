#include <iostream>
#include "araf.h"
using namespace std;
using namespace araf;

int main() {
    Araf<int> araf;

    araf.add(10);
    araf.add(20);
    araf.add(30);
    araf.add(40);
    araf.add(50);

    cout << "Display: ";
    araf.display();

    araf.add(60, 40, 1);
    cout << "Display adding 60 after 40: ";
    araf.display();

    araf.add(70, 10, 0);
    cout << "Display adding 70 before 10: ";
    araf.display();

    araf.add(80, 50, 1);
    cout << "Display adding 80 after 50: ";
    araf.display();


    if(araf.search(30) == true)
    {
        cout<<"Found it" << endl;
    }
    else
    {
        cout<<"Not Found" << endl;
    }

    if(araf.search(100) == true)
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

    araf.remove(30);
    cout << "Removing element 30: ";
    araf.display();

}
