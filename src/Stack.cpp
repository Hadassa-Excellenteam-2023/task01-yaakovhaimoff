#include "Stack.h"

Stack::Stack()
        : m_data(Vector(0, 0)) {}

Stack::Stack(size_t initial_size, int initial_value)
        : m_data(Vector(initial_size, initial_value)) {}

Stack::Stack(const Stack &other)
        : m_data(other.m_data) {}

void Stack::push(int value) {
    m_data.push_back(value);
}

void Stack::pop() {
    m_data.pop_back();
}

int Stack::top() {
    return m_data[m_data.size() - 1];
}

bool Stack::empty() const {
    return m_data.size() == 0;
}

bool Stack::operator==(const Stack &other) const {
    if (m_data.size() != other.m_data.size()) {
        return false;
    }
    for (size_t i = 0; i < m_data.size(); ++i) {
        if (m_data[i] != other.m_data[i]) {
            return false;
        }
    }
    return true;
}

bool Stack::operator!=(const Stack &other) const {
    return !(*this == other);
}

Stack& Stack::operator+=(const Stack& other) {
    for (size_t i = 0; i < other.m_data.size(); ++i) {
        m_data.push_back(other.m_data[i]);
    }
    return *this;
}

Stack& Stack::operator-=(const Stack& other) {
    if (m_data.size() < other.m_data.size()) {
        return *this;
    }
    for (size_t i = 0; i < other.m_data.size(); ++i) {
        m_data[m_data.size() - 1 - i] -= other.m_data[other.m_data.size() - 1 - i];
    }
    return *this;
}

Stack& Stack::operator*=(const Stack& other) {
    if (m_data.size() < other.m_data.size()) {
        return *this;
    }
    for (size_t i = 0; i < other.m_data.size(); ++i) {
        m_data[m_data.size() - 1 - i] *= other.m_data[other.m_data.size() - 1 - i];
    }
    return *this;
}

Stack& Stack::operator/=(const Stack& other) {
    if (m_data.size() < other.m_data.size()) {
        return *this;
    }
    for (size_t i = 0; i < other.m_data.size(); ++i) {
        if (other.m_data[other.m_data.size() - 1 - i] == 0) {
            std::cerr << "Division by zero error!" << std::endl;
            exit(1);
        }
        m_data[m_data.size() - 1 - i] /= other.m_data[other.m_data.size() - 1 - i];
    }
    return *this;
}

Stack &Stack::operator-=(int value) {
    for (size_t i = 0; i < m_data.size(); ++i) {
        m_data[i] -= value;
    }
    return *this;
}

Stack &Stack::operator+=(int value) {
    for (size_t i = 0; i < m_data.size(); ++i) {
        m_data[i] += value;
    }
    return *this;
}

Stack &Stack::operator*=(int value) {
    for (size_t i = 0; i < m_data.size(); ++i) {
        m_data[i] *= value;
    }
    return *this;
}

Stack &Stack::operator/=(int value) {
    for (size_t i = 0; i < m_data.size(); ++i) {
        m_data[i] /= value;
    }
    return *this;
}

Stack &Stack::operator=(const Stack &other) {
    if (this != &other) {
        m_data = other.m_data;
    }
    return *this;
}