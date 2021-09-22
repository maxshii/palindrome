//This program will return whether or not an input is a palindrome
#include <iostream>
#include <cstring>
#include <cctype>

using namespace::std;

int main()
{
  char input[80];
  cin >> input;
  char str[80];

  int count = 0;
  for (int i = 0; i < 80; i++)
    {
      if(isalnum(input[i]))
	{
	  str[count] = input[i];
	  count++;
	}
    }

  cout << str;
}
