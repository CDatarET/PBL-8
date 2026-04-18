#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Student{
    public:
        int prn;
        int marks;
        string name;
        Student *next;
        Student(int prn, int marks, string name){
            this->prn = prn;
            this->marks = marks;
            this->name = name;
            this->next = nullptr;
        }
};

class HashTable{
    private:
        Student *buckets[10];
        int hash(int n){
            return(n % 10);
        }

    public:
        HashTable(){
            for(int i = 0; i < 10; i++){
                buckets[i] = nullptr;
            }
        }

        void display(){
            for(int i = 0; i < 10; i++){
                if(buckets[i] == nullptr){
                    continue;
                }
                else{
                    Student *current = buckets[i];
                    while(current != nullptr){
                        cout << "prn: " << current->prn << endl;
                        cout << "marks: " << current->marks << endl;
                        cout << "name: " << current->name << endl;
                        current = current->next;

                        cout << endl;
                    }

                    cout << endl;
                }
            }
        }

        void insert(){
            int prn;
            cout << "Enter prn: ";
            cin >> prn;

            int marks;
            cout << "Enter marks: ";
            cin >> marks;

            string name;
            cout << "Enter name: ";
            cin >> name;

            Student *s = new Student(prn, marks, name);
            int h = hash(s->prn);

            s->next = buckets[h];
            buckets[h] = s;

            cout << endl;
        }

        void search(){
            int prn;
            cout << "Enter prn: ";
            cin >> prn;

            Student *current = buckets[hash(prn)];
            while(current != nullptr){
                if(current->)
            }
        }

        void modify(){

        }

};

int main(){
    cout << "Hello World\n";
    HashTable ht;

    char yn = 'y';
    while(yn == 'y'){
        int c;
        cout << "Select operation- \n";
        cout << "1 Display\n";
        cout << "2 Insert\n";
        cout << "3 Search\n";
        cout << "4 Modify\nEnter choice (1, 2, 3, 4): ";
        cin >> c;
        cout << endl;

        switch(c){
            case 1:
                ht.display();
                break;

            case 2:
                ht.insert();
                break;
            case 3:
                
        }

        cout << "Perform another operation? y/n: ";
        cin >> yn;
    }

    return(0);
}
