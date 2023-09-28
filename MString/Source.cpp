#include <iostream>
#include "MyString.h"
#include <cstring>

using namespace std;


int main() {
    MyString str1;
    MyString str2(100); 
    MyString str3("Hello, World!"); 

    // Использование методов класса
    cout << "Length of str1: " << str1.getLength() << endl;
    cout << "Length of str2: " << str2.getLength() << endl;
    cout << "Length of str3: " << str3.getLength() << endl;
    cout << "Object count: " << MyString::getObjectCount() << endl;

    system("pause");
}