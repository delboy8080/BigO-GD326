#pragma once
#include <iostream>
using namespace std;
template <class T>
class DynamicArray
{
	T* arr;
	int m_size;
	int m_capacity;
	void grow();
public:
	DynamicArray(int initialCap=10);
	void add(T item);
	void insert(T item, int index);
	void remove(int index);
	int size();
	T get(int index);
	T& operator[](int index);
};

template <class T>
DynamicArray<T>::DynamicArray(int initialCap)
{
	arr = new T[initialCap];
	m_size = 0;
	m_capacity = initialCap;
}

template <class T>
int DynamicArray<T>::size()
{
	return m_size;
}
template <class T>
T DynamicArray<T>::get(int index)
{
	if (index < 0 || index >= m_size)
	{
		throw std::logic_error("Invalid index");
	}
	return arr[index];
}

template <class T>
T& DynamicArray<T>::operator[](int index)
{
	if (index < 0 || index >= m_size)
	{
		throw std::logic_error("Invalid index");
	}
	return arr[index];
}

template <class T>
void DynamicArray<T>::grow()
{
	cout << "Growing from " << m_capacity;
	T* newArr = new T[m_capacity*2];
	for (int i = 0; i < m_size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	m_capacity *= 2;
	cout << " to " << m_capacity<<endl;
}

template <class T>
void DynamicArray<T>::add(T item)
{
	if (m_capacity == m_size)
	{
		grow();
	}
	arr[m_size] = item;
	m_size++;
}