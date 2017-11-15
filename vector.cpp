#include <iostream>
using namespace std;

template <typename T>
class Myvector{
    T vec[1];
public:

    int size(void)
    {
        unsigned int tmp; 
        for(int i=0;~(vec[i]!=0);i++)
        {
            tmp=i+1;
        }
        return tmp; 
    }
    int capacity(void)
    {
        return sizeof(vec);
    }
    void push_back(T n)
    {
        vec[size()] = n;
    }
    int front(void)
    {
        return vec[0];
    }
    int back(void)
    {
        return vec[size()-1];
    }
    int data(void)
    {
        return &vec[0];
    }
    ~Myvector
    {
        delete vec;
    }

};

int main(void)
{
    Myvector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.data()<<endl;
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<'\t';
    }
    cout<<endl;
}