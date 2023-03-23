#include <iostream>
#include "Vector.h"
#include "Stack.h"

int main() {
    std::cout << "check Vector class implementation" << std::endl;

    // Create a vector of size 5 with initial value 10
    Vector v(5, 10);

    // Print the contents of the vector
    std::cout << "Initial vector: ";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Push back some values
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // Print the contents of the vector
    std::cout << "After push_back: ";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Pop back a value
    v.pop_back();

    // Print the contents of the vector
    std::cout << "After pop_back: ";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Test the reserve function
    v.reserve(8);

    // Print the contents of the vector
    std::cout << "After reserve: ";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Vector v2 = v;

    // Print the contents of the vector
    std::cout << "Copied vector: ";
    for (size_t i = 0; i < v2.size(); ++i) {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Vector v3(2, 5);
    v3 = v;

    // Print the contents of the vector
    std::cout << "Assigned vector: ";
    for (size_t i = 0; i < v3.size(); ++i) {
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "check Stack class implementation" << std::endl;

    // Create a stack and push some values onto it
    Stack s(3, 10);
    s.push(5);
    s.push(6);
    s.push(7);

    // Print the top value of the stack
    std::cout << "Top: " << s.top() << std::endl;

    // Pop the top value off the stack
    s.pop();

    // Print the top value of the stack again
    std::cout << "Top: " << s.top() << std::endl;

    // Test the comparison operators
    Stack s2(4, 10);
    std::cout << "s == s2: " << (s == s2) << std::endl;
    std::cout << "s != s2: " << (s != s2) << std::endl;

    // Test the arithmetic operators
    Stack s3 = s + 4;
    std::cout << "s3: ";
    while (!s3.empty()) {
        std::cout << s3.top() << " ";
        s3.pop();
    }
    std::cout << std::endl;

    Stack s4 = s * 2;
    std::cout << "s4: ";
    while (!s4.empty()) {
        std::cout << s4.top() << " ";
        s4.pop();
    }
    std::cout << std::endl;

    // Test the plus-equal operator
    s += s2;
    std::cout << "s: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}
