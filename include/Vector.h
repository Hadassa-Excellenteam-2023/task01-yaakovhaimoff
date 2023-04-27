#pragma once

#include <iostream>
#include <algorithm>

class Vector {
public:
    Vector() = default;

    Vector(size_t initial_size, int initial_value);

    ~Vector();

    Vector(const Vector &other);

    Vector &operator=(const Vector &other);

    void push_back(int value);

    void pop_back();

    int &operator[](size_t index);

    int operator[](size_t index) const;

    size_t size() const;

    void reserve(size_t new_capacity);

private:
    size_t m_size;
    size_t m_capacity;
    int *m_data;
};
