
#include "stdafx.h"
#include <iostream>
#include <string>


//Aufgabe 1
void a1a() {
	int i = 0;
	std::cin >> i;
}

void a1b() {
	int i = 100;
	std::cout << "Die Zahl lautet " + i;
}

struct Student {
	std::string name;
	long id_number;
};

std::ostream& operator << (std::ostream &o, const Student &s) {
	o << s.id_number << " " << s.name << std::endl;
	return o;
}

void a1c() {
	Student student = { "Foo Bar", 123 };
	std::cout << student << std::endl;
}

//Aufgabe 2
void a2a() {
	int length = 10;
	int* myArray = new int[length];
}

/*2b
	int n = 1;
	namespace foo {
		int n = 2;
		void bar() {
			int n = 3;
			std::cout << ::foo::n << n << ::n << foo::n << std::endl;
			//				    2	 3		1		  2
		}
	} // namespace foo
*/

/*2c
void foo(int a, int b = 2, int c = 3, int d = 4) {
	std::cout << a << b << c << d << std::endl;
}
void bar() {
	int c = 7;
	int d = 8;
	foo(5, c, d);
}
OUT -> 5784
*/

/*
void foo(int a, int& b, int* c) {
	a += 1;
	b += 2;
	c += 3;
}
void bar() {
	int w = 1;
	int x = w;
	int& y = x;
	int* z = &w;
	w += 1;
	x += 2;
	y += 3;
	z += 4;
	foo(x, y, z);
	std::cout << w << y << std::endl;
}
OUT -> 28
*/

// Aufgabe 4
/*
a) Kein selbst implementierter Destruktor da wir nichts allokieren

class A {
public:
	A(int info) : info_(info) {}
	//Standardkonstruktor benötigt
	A() { A(0); }

	//c
	A get() {
		return info_;
	}
	void set(int neu) {
		info_ = neu;
	}
private:
	int info_;
};

class B {
public:
	B(int info) {
		data_ = *(new A(info));
	}
	//c
	A get() {
		return data_.get();
	}
	void set(int neu) {
		data_.set(neu);
	}
private:
	A data_;
};

*/

// Aufgabe 5 + 6
class RegularPolygon {
public:
	RegularPolygon(unsigned int number_of_sides, float side_length);
	float Perimeter();
	virtual float Area() = 0;
private:
	unsigned int number_of_sides_;
	float side_length_;
};

RegularPolygon::RegularPolygon(unsigned int number_of_sides, float side_length) {
	this->number_of_sides_ = number_of_sides_;
	this->side_length_ = side_length_;
}

float RegularPolygon::Perimeter() {
	return number_of_sides_ * side_length_;
}


class EquilateralTriangle : public RegularPolygon {
public:
	EquilateralTriangle(float side_length) : RegularPolygon(3, side_length) {}
	float Area();
};

float EquilateralTriangle::Area()
{
	return 3.0f;
}

class Square : public RegularPolygon {
public:
	Square(float side_length) : RegularPolygon(4, side_length) {}
	float Area();
};

float Square::Area()
{
	return 4.0f;
}

class Pentagon : public RegularPolygon {
public:
	Pentagon(float side_length) : RegularPolygon(4, side_length) {}
	float Area();
};

float Pentagon::Area()
{
	return 5.0f;
}

void a6() {
	RegularPolygon* polygons[5] = { new EquilateralTriangle(1.0), new Square(2.0), new Pentagon(3.0) };

	for (int i = 0; i < 5; ++i) {
		std::cout << polygons[i]->Area() << std::endl;
	}
}

//Aufgabe 7
template<typename T>
class Accumulator {
public:
	Accumulator(T initial_value) : accumulated_value_(initial_value) {}
	void Accumulate(T value) { accumulated_value_ += value; }
	T AccumulatedValue() { return accumulated_value_; }
private:
	T accumulated_value_;
};

void a7() {
	Accumulator<int> acc(0);
	acc.Accumulate(5);
	int meins = acc.AccumulatedValue();
	std::cout << meins;
}
//zum Datentyp muss der Operator += definiert sein

//Aufgabe 8

int main()
{
	

	int i;
	std::cin >> i;
	return 0;
}