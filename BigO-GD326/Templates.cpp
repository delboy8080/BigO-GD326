#include <iostream>
#include "Pair.h"

using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
struct book
{
	string title, author;
	book()
	{

	}
	book(string t, string a)
	{
		title = t;
		author = a;
	}

	bool operator >(book& b2)
	{
		return author > b2.author;
	}
	bool operator <(book& b2)
	{
		return author < b2.author;
	}
	friend ostream& operator<<(ostream& os, book b1)
	{
		os << "[" << b1.title << " by " << b1.author << "]";
		return os;
	}
};


int main()
{
	question4();
}

template <typename T>
T greaterThan(T x, T y)
{
	T greater = x > y ? x : y;
	return greater;
}
void question1()
{
	int x = 10, y = 15;
	cout << "The largest int is " << greaterThan(x, y) << endl;
	char x1 = 'A', y1 = 'Z';
	cout << "The largest char is " << greaterThan(x1, y1) << endl;
	book b1("The hobbit", "JRR Tolkein");
	book b2("The Judges List", "John Grisham");
	cout << "The largest book is " << greaterThan(b1, b2) << endl;


}
template <class T>
T lessThan(T x, T y)
{
	return x < y ? x : y;
}
void question2()
{
	int x = 10, y = 15;
	cout << "The smallest int is " << lessThan(x, y) << endl;
	char x1 = 'A', y1 = 'Z';
	cout << "The smallest char is " << lessThan(x1, y1) << endl;
	book b1("The hobbit", "JRR Tolkein");
	book b2("The Judges List", "John Grisham");
	cout << "The smallest book is " << lessThan(b1, b2) << endl;

}

template <class T>
void print(T* arr, int size)
{
	for (int i = 0; i < size;i++)
	{
		if (i != 0)
			cout << ", ";
		cout << arr[i];
	}
	cout << endl;
}
void question3()
{
	const int size = 5;
	int intArr[size] = { 1,2,3,4,5 };
	char charArr[size] = { 'A','B', 'C','D','E'};
	book bookArr[size] = { book("The Judges List", "John Grisham"),
		book("Time", "Stephen Hawking"),
		book("The Hobbit", "JRR Tolkein"),
		book("Harry Potter", "JK Rowling"),
		book("The Widow", "John Grisham") };

	print(intArr, size);
	print(charArr, size);
	print(bookArr, size);


}
void question4()
{
	Pair<int, string> p1(1, "one");
	cout << p1;
	Pair<string, book> p2("ASD-123456", book("The widow", "John Grisham"));
	cout << p2;
	
}
void question5()
{

}
void question6()
{

}