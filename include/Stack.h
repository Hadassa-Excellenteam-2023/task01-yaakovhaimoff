#pragma once

#include "Vector.h"

class Stack {
public:
    Stack();

    Stack(size_t initial_size, int initial_value);

    Stack(const Stack &other); // Copy constructor

    void push(int value);

    void pop();

    int top();

    bool empty() const;

    size_t size() const { return m_data.size(); };

    // Comparison operators
    bool operator==(const Stack &other) const;

    bool operator!=(const Stack &other) const;

    Stack &operator+=(const Stack &other);

    Stack &operator-=(const Stack &other);

    Stack &operator*=(const Stack &other);

    Stack &operator/=(const Stack &other);

    Stack &operator+=(int value);

    Stack &operator-=(int value);

    Stack &operator*=(int value);

    Stack &operator/=(int value);

    // Copy assignment operator
    Stack &operator=(const Stack &other);

private:
    Vector m_data;
};