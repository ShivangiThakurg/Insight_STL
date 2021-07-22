/*In a given string, calculate frequency of each character and return the
   result as a map - char vs count
*/
#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

#define SIZE 26

template<typename Map>
void PrintMap(Map& m)
{
   cout << '{';
   for(auto& p: m)
   {
       if(p.first>='a')cout << p.first << ':' << p.second << ' ';
   }
   cout << "}\n";
}

map<char, int> print_Char_With_Freq(string str)
{
    map<char, int> result;
	int n = str.size();
	int freq[SIZE];
	memset(freq, 0, sizeof(freq));
	for (int i = 0; i < n; i++)
		freq[str[i] - 'a']++;
	// traverse 'str' from left to right
	for (int i = 0; i < n; i++) {
		// if frequency of character str[i] is not
		// equal to 0
		if (freq[str[i] - 'a'] != 0) {
            result[str[i]] = freq[str[i]-'a'];
			// update frequency of str[i] to 0 so
			// that the same character is not printed
			// again
			freq[str[i] - 'a'] = 0;
		}
	}
    return result;
}

int main()
{
	string str = "In a given string, calculate frequency of each character and return the result as a map - char vs count";
    map<char, int> result;
	result = print_Char_With_Freq(str);
    PrintMap(result);
	return 0;
}
