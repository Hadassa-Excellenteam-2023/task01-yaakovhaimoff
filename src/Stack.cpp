#include "Stack.h"

Stack::Stack(const size_t& initial_size, const int& initial_value) : m_data(Vector(initial_size, initial_value)) {}

void Stack::push(int value) {
    m_data.push_back(value);
}

void Stack::pop() {
    m_data.pop_back();
}

int &Stack::top() {
    return m_data[m_data.size() - 1];
}

const int &Stack::top() const {
    return m_data[m_data.size() - 1];
}

bool Stack::empty() const {
    return m_data.size() == 0;
}

size_t Stack::size() const {
    return m_data.size();
}

bool Stack::operator==(const Stack &other) const {
    return m_data.size() == other.m_data.size();
}

bool Stack::operator!=(const Stack &other) const {
    return m_data.size() != other.m_data.size();
}

Stack Stack::operator+(int value) const {
    Stack result{};
    result.m_data.reserve(m_data.size() + 1);
    result.m_data = m_data;
    result.m_data.push_back(value);
    return result;
}

Stack Stack::operator-(int value) const {
    Stack result{};
    result.m_data.reserve(m_data.size());
    for (size_t i = 0; i < m_data.size(); ++i) {
        result.m_data.push_back(m_data[i] - value);
    }
    return result;
}

Stack Stack::operator*(int value) const {
    Stack result{};
    result.m_data.reserve(m_data.size());
    for (size_t i = 0; i < m_data.size(); ++i) {
        result.m_data.push_back(m_data[i] * value);
    }
    return result;
}

Stack Stack::operator/(int value) const {
    Stack result{};
    result.m_data.reserve(m_data.size());
    for (size_t i = 0; i < m_data.size(); ++i) {
        result.m_data.push_back(m_data[i] / value);
    }
    return result;
}

Stack &Stack::operator+=(const Stack &other) {
    m_data.reserve(m_data.size() + other.m_data.size());
    for (size_t i = 0; i < other.m_data.size(); ++i) {
        m_data.push_back(other.m_data[i]);
    }
    return *this;
}
