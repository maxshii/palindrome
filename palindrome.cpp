//This program will return whether or not an input is a palindrome
#include <iostream>
#include <cstring>
#include <cctype>

using namespace::std;

int main()
{
  char input[80];
  cin.get(input, 80);
  char str[80];

  //removes punctuation and spaces
  int count = 0;
  for (int i = 0; i < 80; i++)
    {
      if(isalnum(input[i])) //adds input[i] to str if it is a number or letter
	{
	  str[count] = tolower(input[i]);
	  count++;
	}
      else if(input[i] == '\0') //ends str if input has ended
	{
	  str[count] = '\0';
	  break;
	} 
    }

  //creates flipped which is str reversed
  count = 0;
  char flipped[strlen(str)];
  for(int i = strlen(str) - 1; i >= 0; i--)
    {
      flipped[count] = str[i];
      count ++;
      flipped[count] = '\0'; //makes sure no unwanted characters end up in flipped
    }
  
  //tells user whether or not the input is a palindrome
  if(strcmp(str, flipped) == 0)
    {
      cout << "This is a palindrome" << endl;
    }
  else
    {
      cout << "This is not a palindrome" << endl;
    }
  
}
