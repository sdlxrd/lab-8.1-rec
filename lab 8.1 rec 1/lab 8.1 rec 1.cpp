// є рядок, в якому є 3 крапки, знайти [i] третьої

#define _SRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Third_Point(char* str, int i, int count)
{

	if (str[i] == '.')
		count++;
	
//if ((i < strlen(str) - 1))
	if (count < 3)
		return Third_Point(str, i + 1, count);
	else
		//if (count == 3)
			return i;
		
}
char* Change(char* str, int i)
{
	

	i += 3;
	str[i] = '.';
	if (i < strlen(str)-1)
		return Change(str, i + 1);
	else
		return str;
}
int main()
{
	char str[40];
	cout << "Enter string:   ";
	cin.getline(str, 40);

	cout << endl << "i of third . = " << Third_Point(str, 0, 0) << endl;;
	
	char* changed = new char[40];
	changed = Change(str, 0);
	
	cout << endl << "Changed string: " << changed << endl;

	return 0;
}