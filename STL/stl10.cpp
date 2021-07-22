/*Given a sentence in string form, return a map of pairs , 
    where in each pair - word as key and length of the word as value.
    Double the length if word already present in the map (duplicate)
*/
#include<bits/stdc++.h>
using namespace std;

void mapOfPairs(string s)
{
    map<char,int> pair1;
    for(int i=0;i<s.length();i++)
    {
        pair1.insert(pair<char,int>(s[i],strlen(s[i])));
    }

    map<char,int>::iterator itr;
    for(itr=pair1.begin();itr!=pair1.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}

int main()
{
    string s;
    getline(cin,s);

    mapOfPairs(s);
}