///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Samkelo Zondi
// Student No: 214538321
// Date: 22-March-2016
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include<iostream>
#include<string>

using namespace std;

class Animal{
protected:
	string newName;
	string newDoes;


public:
	Animal();
	void setValues(string a, string b){ newName = a; newDoes = b; }
	virtual string name() = 0;
	virtual string does() = 0;
};

class Bird :public Animal {
public:
	string name(){ return newName; };
	string does(){ return newDoes; };

};

class Dog : public Animal{
public:
	string name(){ return newName; };
	string does(){ return newDoes; };
};

