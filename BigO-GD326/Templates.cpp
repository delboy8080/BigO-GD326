#include <iostream>

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
	friend ostream& operator<<(ostream& os, book& b1)
	{
		os << "[" << b1.title << " by " << b1.author << "]";
		return os;
	}
};

int main()
{
	question1();
}

template <typename T>
T greaterThan(T x, T y)
{
	T greater = x > y ? x : y;
	return greater;
}
void question1()
{

}
void question2()
{

}
void question3()
{

}
void question4()
{

}
void question5()
{

}
void question6()
{

}