#include "MyVector/my_vector.h"
#include <iostream>

cu::Vector::Vector() : Vector(0) {}

cu::Vector::Vector(int capacity) : m_capacity(capacity), m_size(0)
{
    m_array = std::unique_ptr<int[]>(new int[m_capacity]);
}

int cu::Vector::size()
{
    return m_size;
}

int cu::Vector::capacity()
{
    return m_capacity;
}

bool cu::Vector::is_empty()
{
    return m_size == 0;
}

void cu::Vector::push(int element)
{
    if (m_size + 1 > m_capacity)
    {
        std::unique_ptr<int[]> new_array = std::unique_ptr<int[]>(new int[2 * m_capacity]);
    }
    m_array[m_size] = element;
    std::cout << m_array[m_size] << std::endl;
    m_size += 1;
}