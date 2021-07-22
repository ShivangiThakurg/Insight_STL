/*Write a function that takes collection of numbers and a target number. 
   It should  find two different elements in the array that, when added together will be equal to target
   value.Consider std::vector or std::list for input elements, 
   Return the indices of two elements as std::pair object.
   If no such pair, whose sum is not equal to target number , return the pair {-1,-1}
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;
pair<int, int> indices{-1,-1};
vector<int> numbers = {1,2,3,4,5,6,7};
int FLAG = 0;

pair<int, int> findindices(vector<int> numbers, int target)
{   
    for(auto number:numbers)
    {
        for(auto num:numbers)
        {
            if(num+number == target)
            {
                FLAG = 1;
                return {number,num};
            }
        }
    }
    if(FLAG!=1)
    {
        return {-1,-1};
    }
}

int main()
{
    int target = 5;
    indices = findindices(numbers, target);
    cout<<"{"<<indices.first<<", "<<indices.second<<"}"<<endl;
    return 0;
}