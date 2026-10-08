#include <iostream>
using namespace std;

void coco(string name1, string name2)
{
    cout << "the names is  " << name1 << "  " << name2;
}

int main()
{

    cout << " add two name start with one";
    string name1;
    cin >> name1;
    string name2;
    cin >> name2;

    coco(name1, name2);
    return 0;
}

void mama(){
    cout << "dad";
    cout << "mom";
}