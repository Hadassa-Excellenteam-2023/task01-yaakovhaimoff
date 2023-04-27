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

    Stack s;

    // Push some values onto the stack
    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Contents of stack s: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    // Push some values onto the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // Create a stack with initial size 5 and initial value 0
    Stack s1(5, 5);

    std::cout << "Contents of stack s1: ";
    while (!s1.empty()) {
        std::cout << s1.top() << " ";
        s1.pop();
    }
    std::cout << std::endl;

    Stack s2 = s;

    // Concatenate the two stacks using the += operator
    s2 += 5;

    // Print the contents of the concatenated stack
    std::cout << "Contents of a added stack s: ";
    while (!s2.empty()) {
        std::cout << s2.top() << " ";
        s2.pop();
    }
    std::cout << std::endl;

    Stack s3 = s;

    // Multiply the new stack by 2 using the *= operator
    s3 *= 2;

    // Print the contents of the new stack
    std::cout << "Contents of a multiplied stack s: ";
    while (!s3.empty()) {
        std::cout << s3.top() << " ";
        s3.pop();
    }
    std::cout << std::endl;

    // Create another stack and assign the contents
    Stack s4 = s;

    // Subtract 1 from each element of the new stack using the -= operator
    s4 -= 1;

    // Print the contents of the new stack
    std::cout << "Contents of a subtracted stack s: ";
    while (!s4.empty()) {
        std::cout << s4.top() << " ";
        s4.pop();
    }
    std::cout << std::endl;

    Stack s5 = s;

    // Subtract 2 from each element of the new stack using the /= operator
    s4 /= 2;

    // Print the contents of the new stack
    std::cout << "Contents of a divided stack s: ";
    while (!s5.empty()) {
        std::cout << s5.top() << " ";
        s5.pop();
    }
    std::cout << std::endl;

    Stack s6 = s;

    s6 += s;

    // Print the contents of the new stack
    std::cout << "Contents of stack s added to stack s: ";
    while (!s6.empty()) {
        std::cout << s6.top() << " ";
        s6.pop();
    }
    std::cout << std::endl;

    Stack s7 = s;

    s7 -= s;

    // Print the contents of the new stack
    std::cout << "Contents of stack s subtracted by stack s: ";
    while (!s7.empty()) {
        std::cout << s7.top() << " ";
        s7.pop();
    }
    std::cout << std::endl;

    Stack s8 = s;

    s8 *= s;

    // Print the contents of the new stack
    std::cout << "Contents of stack s multiplied by stack s: ";
    while (!s8.empty()) {
        std::cout << s8.top() << " ";
        s8.pop();
    }
    std::cout << std::endl;

    Stack s9 = s;

    s9 /= s;

    // Print the contents of the new stack
    std::cout << "Contents of stack s divided by stack s: ";
    while (!s9.empty()) {
        std::cout << s9.top() << " ";
        s9.pop();
    }
    std::cout << std::endl;

    return 0;
}
