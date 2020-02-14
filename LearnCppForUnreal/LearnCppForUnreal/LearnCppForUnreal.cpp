// LearnCppForUnreal.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iostream>
#include <string>
#include <array>

using namespace std;

// 3-2. 함수 선언
/*
void CalculateNumbers();
void SubtractNumbers(int a, int b);
int SubtractNumvers_2();
*/

// 5-2. 반복문 함수 선언
/*
void SomeFunction();
*/

// 6-2. 배열 함수 선언
void ArrayFunction();

int main()
{
	// 1.변수
	/*
	int power = 3;

	float health = 6.7f;

	double mana = 3.2;

	bool isDrea = false;

	char one_Letter = 's';

	string player_Name = "Carl the Great";

	std::cout << "The name of my character is : " << player_Name;

	*/

	// 2. 변수를 이용한 연산
	/* 변수를 이용한 연산
	float health = 100.f;
	float damage = 2.f;


	std::cout << "The remaining health is : " << health + damage << "\n";
	//The remaining health is : 102

	int a = 2;
	int b = 3;

	int sum = a + b;

	std::cout << "The sum of a and b is : " << sum << "\n";
	//The sum of a and b is : 5

	float c = 7.;
	float d = 2.;

	float division = c / d;
	// int division = c / d;   **  3

	std::cout << "The division of c and d is : " << division << "\n";
	//The division of c and d = 3.5

	int e = 7;
	float f = 2.f;

	int multification = e * f;

	std::cout << "The multification of e and f is : " << multification << "\n";
	//The multification of a and b is : 14

	int g = 7;
	int h = 10;

	int subtraction = g - h;

	std::cout << "The subtraction of g and h is : " << subtraction << "\n";
	//The subtraction of g and h is : -3
	*/

	// 3. 함수
	/*
	CalculateNumbers(); //The subtraction of g and h is : -3

	SutractNumbers(14, 4); //The subtraction of g and h is : 10

	int subtraction = SubtractNumvers_2();
	std::cout << "The subtraction of a and b is : " << subtraction;
	//The subtraction of a and b is 5
	*/

	// 4. 조건문
	/*

	//if문
	int a = 5;

	if (a > 6) {
		std::cout << "A is greater than 6";
	}
	else if (a > 3) {
		std::cout << "A is greater than 3";
	}
	else if (a == 2) {
		std::cout << "A is equal to 2";
	}
	else if (a >= 5) {
		std::cout << "A is greater or equal to 5";
	}
	else {
		std::cout << "ELSE IS EXECUTED";
	}

	//switch문
	int b = 5;

	switch (b)	{
	case 1:
		std::cout << "The value is 1";
		break;
	case 2:
		std::cout << "The value is 2";
		break;
	case 3:
		std::cout << "The value is 3";
		break;
	case 4:
		std::cout << "The value is 4";
		break;
	case 6:
		std::cout << "The value is 6";
		break;

	default:
		std::cout << "The default was executed";
		break;
	}
	*/

	// 5. 반복문
	/*
	// 5-2. for문
	int c = 1;
	c = c + 1;

	for (int i = 0; i < 5; i++) {
		std::cout << "The value of i : " << i << endl;
	}

	// 5.3 반복문
	int i = 0;

	while (i < 10) {
		std::cout << "The value Of i is : " << i << endl;

		i++;
	}
	*/

	// 6. 배열
	/*
	int a[10];// = { 2, 3, 66, 78, 12, 53, 45, 62, 12, 123 };

	string names[4] = { "carl", "kenny", "Johny", "Gordon" };

	for (int i = 0; i < size(a); i++) {
		a[i] = rand();
	}

	for (int i = 0; i < size(a); i++) {
		cout << "The value of the integer is : " << a[i] << endl;
	}

	int i = 0;

	while (i < size(a))
	{
		cout << "The Value Is : " << a[i] << endl;

		i++;
	}
	*/

	//포인터

	int a = 5;

	int* pointerTo_A = &a;

	void* some_Pointer = &a;

	cout << "The a value is : " << a << endl;

	cout << "The memory ADDRESS of the a variable is : " << &a << endl;

	cout << endl;

	cout << "The value of some_Pointer is : " << *pointerTo_A << endl;

	cout << "The memory ADDRESS of pointerTo_A is : " << pointerTo_A << endl;
}

// 3-1.함수
/*
void CalculateNumbers() {

	int g = 7;
	int h = 10;

	int subtraction = g - h;

	std::cout << "The subtraction of g and h is : " << subtraction << "\n";
}

void SubtractNumbers(int a, int b) {
	int subtraction = a - b;

	std::cout << "The subtraction of a and b is : " << subtraction << "\n";
}

int SubtractNumvers_2() {
	int subtraction = 10 - 5;

	return subtraction;
}
*/

// 5-1. 반복문 함수
/*
void SomeFunction() {
	std::cout << "Printed From Function" << endl;

}
*/

// 6-1. 배열 함수
void ArrayFunction() {
	std::cout << "Printed From Function" << endl;
}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

