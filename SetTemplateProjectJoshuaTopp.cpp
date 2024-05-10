// SetTemplateProjectJoshuaTopp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <string>
#include <iostream>
#include "unorderedSetType.h"
#include <set>
using namespace std;

int main()
{
	set<int> mySet = { 1, 2, 3 };
	set<int> mySet2 = {2,3,4,5};
	set<int> mySet3;
	set<string> strSet = { "a", "b", "c"};
	set<string> strSet2 = { "a", "b", "d"};
	set<string> strSet3; 
	unorderedSetType<int> insertAt(int mySet, int mySet2);
	unorderedSetType<int> insertEnd(int mySet2);
	int i = 5;
	unorderedSetType<int> replaceAt(int mySet, int i );

	unorderedSetType<int>print();
	unorderedSetType<string> insertAt(string strSet, string  strSet2);
	unorderedSetType<string> insertEnd(string strSet2);
	string a = "z";
	unorderedSetType<string> replaceAt(string strSet, string a);
	

	












}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
