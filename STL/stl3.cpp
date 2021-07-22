/*Given the total distance travelled by a Vehicle at regular intervals 
   and value of interval, calculate average speed of the vehicle.
   e.g. [0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0]
*/
#include <iostream>
#include <list>
using namespace std;

float AverageSpeed(list<float> DistanceList, float Interval)
{
    float avg = 0;
    for(auto Distance:DistanceList)
    {
        avg += Distance/(Interval * DistanceList.size()); 
    }
    return avg;
}

int main()
{
    float Interval = 2.5;
    list<float> DistanceList{0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    cout<<AverageSpeed(DistanceList,Interval)<<endl;
}