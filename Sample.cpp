#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    string dept;
    string subject;
    double salary; 

    void changeDept(string newdept){
        dept=newdept;
    }
       
};

int main(){
    Teacher T1;
    T1.name="Pranav";
    T1.dept="AIDS";
    cout << T1.name << endl;
    return 0;
}

