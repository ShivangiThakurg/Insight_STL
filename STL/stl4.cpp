/*From a collection of words, one word is missing. Find the missing value 
   given original  list/vector of words and modified one.
*/
#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

string MissingWord(list<string> OriginalWords, list<string> words)
{
  OriginalWords.sort();
  words.sort();
  string missed;
  for(string word1:OriginalWords)
  { 
    int flag = 0;
    for(string word2:words)
    {
      if(word2==word1)
      {
        flag = 1;
        break;
      }
    }
    if(!flag){
      missed = word1;
      break;
    };
  }
  return missed;
}

int main()
{
  list<string> OriginalWords{"One", "Two", "Three", "Four", "Five"};
  list<string> words{"One", "Two", "Four", "Five"};
  cout<<MissingWord(OriginalWords, words)<<endl;
}