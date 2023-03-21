#pragma once
#include "Vector.h"

class Stack {
public:
    Stack() = default;
    Stack(const size_t& initial_size, const int& initial_value);
    void push(int value);
    void pop();
    int& top();
    const int& top() const;
    bool empty() const;
    size_t size() const;

    // Comparison operators
    bool operator==(const Stack& other) const;
    bool operator!=(const Stack& other) const;

    // Arithmetic operators with integer values
    Stack operator+(int value) const;
    Stack operator-(int value) const;
    Stack operator*(int value) const;
    Stack operator/(int value) const;

    // Plus-equal operator
    Stack& operator+=(const Stack& other);

private:
    Vector m_data;
};
