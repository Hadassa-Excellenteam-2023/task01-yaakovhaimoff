#include "Vector.h"
#include <algorithm>

Vector::Vector(size_t initial_size, int initial_value) : m_size(initial_size),
                                                         m_capacity(initial_size),
                                                         m_data(new int[m_capacity == 0 ? 1 : m_capacity]) {
    for (size_t i = 0; i < m_size; ++i) {
        m_data[i] = initial_value;
    }
}

Vector::~Vector() {
    delete[] m_data;
}

Vector::Vector(const Vector &other) : m_size(other.m_size), m_capacity(other.m_capacity) {
    m_data = new int[m_capacity];
    std::copy(other.m_data, other.m_data + m_size, m_data);
}

Vector &Vector::operator=(const Vector &other) {
    if (this != &other) {
        delete[] m_data;
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        m_data = new int[m_capacity];
        std::copy(other.m_data, other.m_data + m_size, m_data);
    }
    return *this;
}

void Vector::push_back(int value) {
    if (m_size == m_capacity) {
        reserve(2 * m_capacity);
    }
    m_data[m_size++] = value;
}

void Vector::pop_back() {
    if (m_size > 0) {
        --m_size;
    }
}

int &Vector::operator[](size_t index) {
    return m_data[index];
}

int Vector::operator[](size_t index) const {
    return m_data[index];
}

size_t Vector::size() const {
    return m_size;
}

void Vector::reserve(size_t new_capacity) {
    if (new_capacity > m_capacity) {
        if (m_capacity >= 180) {
            new_capacity = m_capacity + m_capacity / 2; // multiply by 1.5
        } else {
            new_capacity = m_capacity * 2; // double the size
        }
        int *new_data = new int[new_capacity];
        std::copy(m_data, m_data + m_size, new_data);
        delete[] m_data;
        m_data = new_data;
        m_capacity = new_capacity;
    }
}
