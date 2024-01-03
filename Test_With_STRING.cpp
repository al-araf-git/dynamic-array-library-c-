#include <iostream>
#include "araf.h"
#include <cstring>
using namespace std;
using namespace araf;

int main() {
    Araf<string> araf;

    araf.add("Hi");
    araf.add("Hello");
    araf.add("World");
    araf.add("C#");
    araf.add("C++");

    cout << "Display: ";
    araf.display();

    araf.add("Python", "C++", 1);
    cout << "Display adding Python after C++: ";
    araf.display();

    araf.add("Rust", "Hi", 0);
    cout << "Display adding Rust before Hi: ";
    araf.display();

    araf.add("Java", "Hello", 1);
    cout << "Display adding Java after Hello: ";
    araf.display();


    if(araf.search("Java") == true)
    {
        cout<<"Found it" << endl;
    }
    else
    {
        cout<<"Not Found" << endl;
    }

    if(araf.search("HTML") == true)
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

    araf.remove("Rust");
    cout << "Removing element Rust: ";
    araf.display();

}
