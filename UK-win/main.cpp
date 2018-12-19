#include <iostream>
#include <list>
 
using namespace std;
 
int main()
{
    list<int> lst;
 
    lst.push_back(3);
    lst.push_back(1);
    lst.push_back(4);
    lst.push_back(1);
    lst.push_back(5);
    lst.push_back(9);
    lst.push_back(2);
    lst.push_back(6);
    lst.push_back(5);
    lst.push_back(3);
    
    lst.sort();
 
    cout << "sorted list: ";
 
    for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++)
        cout << (*itr) << " ";
 
    cout << endl;
 
    return 0;
}