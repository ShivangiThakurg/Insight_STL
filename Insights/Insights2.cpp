/*
Implement following operator overloading on Box class.
   ```
   MyString s1("abcd");
   MyString s2("xyz");
   s3 = s1 + s2;  // 
   s4 = s1 * 3;   // s4 will be "abcdabcdabcd", like in python
   s3 += "hello"; // s3 should be "abcdxyzhello"
   s2 *= 5;       // s2 should be "xyzxyzxyzxyzxyz"
   s5 = s1 * 2 + "hello"  // s5 should be "abcdabcdhello"
*/
#include <iostream>
#include <string.h>

using namespace std;

class MyString {

public:
	char s1[25], s2[25];

	MyString(char str1[], char str2[])
	{
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}

	void operator+()
	{
		cout << "\nConcatenation: " << strcat(s1, s2);
	}
};

int main()
{
	char str1[] = "abcd";
	char str2[] = "xyz";

	MyString a1(str1, str2);

    +a1;
	return 0;
}
