#include <iostream>
#include <fstream>
using namespace std;

class Record{
    int prn;
    int marks;
    string name;
    friend class Student;
};

class Hash{
    int prn;
    int pos;
    public: 
        Hash(){
            prn = -1;
            pos = -1;
        }
    friend class Student;
};

class Student{
    Record rec;
    Hash h[10];
};

int main(){
    cout << "Hello World\n";

    return(0);
}
