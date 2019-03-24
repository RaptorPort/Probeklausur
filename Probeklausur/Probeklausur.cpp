// Probeklausur.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

class Probeklausur {
	int hallo;
	

};

using namespace std;

void aufg2c() {
	bitset<8> hex1(0x06);
	bitset<8> hex2(0x08);
	cout << "0x06: " << hex1 << "   0x08: " << hex2 << endl;
	for (int i = 0; i < 5; ++i) {
		int a = i << 1;
		int b = a & 0x06;
		int c = b | 0x08;
		bitset<8> bi(i); bitset<8> ba(a); bitset<8> bb(b); bitset<8> bc(c);
		cout << "i: " << i << "=" << bi << " a: " << a << "=" << ba << " b: " << b << "=" << bb << " c: " << c << "=" << bc << endl;
	}
}

void aufg3ab() {
	//a
	int alter;
	printf("Eingabe");
	scanf("%d", &alter);
	//b
	char c = 'x';
	printf("Das Zeichen lautet : %c", c);
}

void aufg3c() {
	int x, y; char temp;
	printf("Zahl 1: ");
	scanf("%d%c", &x, &temp);
	printf("Zahl 2: ");
	scanf("%d%c", &y, &temp);
	printf("Zeichen: ");
	scanf("%c", &temp);
	
	if (temp == '+') {
		printf("%d", x+y);
	} else if(temp == '-') {
		printf("%d", x-y);
	}
	else {
		printf("Fehler!");
	}
}

int aufg4a_foo(float f, int *i, char *string) {
	//eine Ganzzahl zurückgibt sowie
	//eine Fließkommazahl, einen Zeiger auf eine Ganzzahl und eine Zeichenkette als Parameter übernimmt.
	return 0;
}

//Aufgabe 4b
/*
int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int maximum;
int minimum;
int mean;
// code C 
bool statistics_value;

int statistics(int numbers[], unsigned int length, bool *statistics_value) {
	int maximum_value = compute_maximum(numbers, length);
	int minimum_value = compute_minimum(numbers, length);
	int mean_value = compute_mean(numbers, length);
	// code B 
	maximum = maximum_value;
	minimum = minimum_value;
	mean = mean_value;

	return length != 0;
}
*/

void aufg5() {
	char string[] = "Das Pferd frisst keinen Gurkensalat.";
	int laenge = strlen(string);
	printf("Laenge: %d Zeichen\n", laenge);
	
	//oder so
	int l = 0;
	char *t;
	t = string;
	while (*t != '\0') {
		l++;
		t++;
	}
	printf("Laenge: %d Zeichen\n", l);

	int numbers[] = { 9, 8, 5, 4, 10, 3, 2, 7, 1, 6 };
	int min = INT_MAX;
	int	min2 = INT_MAX;
	int temp;
	for (int i = 0; i < 10; i++) {
		if (numbers[i] <= min) {
			min2 = min;
			min = numbers[i];
		}
	}
	printf("Zweitkleinste Zahl %d \n", min2);

	//Aufgabe 7a = 8.80000
	float numbers2[] = { 8.0, 4.9, 1.3, 1.4, 9.4, 8.8, 9.7, 6.3, 3.3, 8.3 };
	printf("%f\n", *(&numbers2[3] + 2));
	//7d
	for (int i = 0; i < 10; i++) {
		printf("%f, ", *(numbers2 + i));
	}
}

// Aufgabe 8
struct Data
{
	int day;
	int month;
	Data* node;
};
void mycode() {
	Data today;
	today.day = 23;
	today.month = 1;
}
//c
struct Stud {
	char name[50];
	int nummer;
};
struct Ordnung {
	Stud stud;
	char* pruefungsordnung;
};

void initStruct(char* pruefungsordnung, char* name, int mtrkl) {
	Ordnung *neu = (Ordnung*)malloc(sizeof(Ordnung) + sizeof(char) * strlen(pruefungsordnung));
	strcpy(neu->pruefungsordnung, pruefungsordnung);
	strcpy(neu->stud.name, name);
	neu->stud.nummer = mtrkl;
}

//aufgabe 9
/*
a) einen Pointer auf die Daten
b) Pointer vom aktuell letztem Element welches auf das erste Element zeigt kopieren
   Pointer vom aktuell letztem Element auf das neue letzte Element zeigen lassen
c) 1. Pointer auf das jeweils nächste Element 2. Pointer auf vorherige Element 3. Pointer auf container
	Muss doppelt verkettet sein damit nicht die ganze Liste durchlaufen werden muss um zum letzten Element zu gelangen
d)	1. Der Pointer welcher auf das nächste Element zeigt, des Elements nachdem wir einfügen, ist der next Pointer unseres neuen ELements
	2. Pointer des vorherigen Elements auf das neue Element zeigen lassen
*/

// Aufgabe 10 Sortierverfahren noch anschauen
/*
int main()
{
	aufg5();
	int i;
	cin >> i;
	return 0;

	*/