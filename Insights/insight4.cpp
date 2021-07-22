/*In Currency class, ensure constructors are only meant for initialization, Hint:- explicit
   Implement following user defined type conversions
   - Given total no.of paise, distribute as ruppees and paise, Hint:- operator=
   - Convert currency object as total no.of paise, Hint:- operator int
*/
#include<iostream>

class Currency
{
private:
    int m_rupees;
    int m_paise;
public:
    Currency();
    Currency(int paise);
    int GetRupees();
    int GetPaise();
    void operator=(const int& paise);
    operator int(); 
    ~Currency();
};

Currency::Currency():m_rupees(0), m_paise(0)
{
}
Currency::Currency(int paise):m_rupees(paise/100), m_paise(paise%100)
{
}
int Currency::GetRupees(){
    return m_rupees;
}
int Currency::GetPaise(){
    return m_paise;
}
void Currency::operator=(const int& paise){
    this->m_rupees=paise/100;
    this->m_paise=paise%100;
}
Currency::operator int(){
    return (m_rupees*100)+m_paise;
}
Currency::~Currency()
{
}

int main(){
    Currency c1;
    c1=105;
    std::cout<<c1.GetRupees()<<" rupees "<<c1.GetPaise()<<" paise "<<std::endl;
    int temp=(int)c1;
    std::cout<<temp<<std::endl;
}

