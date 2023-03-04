#ifndef Header_H
#define Header_H
#include <iostream>
#include <string>
using namespace std;
// Definition of pushFront function
void pushFront(string& strg, char c)
{
	string temp(1, c);
	strg.insert(0, temp);
}
// Definition of pushBack function
void pushBack(string& strg, char c)
{
	string temp(1, c);
	strg.append(temp);
}
// Definition of popFront function
char popFront(string& strg)
{
	int index = 0;
	char temp = strg[index];
	strg.erase(index, 1);
	return temp;
}
// Definition of popBack function
char popBack(string& strg)
{
	int index = strg.size() - 1;
	char temp = strg[index];
	strg.erase(index, 1);
	return temp;
}
#endif