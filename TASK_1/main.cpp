#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        void SetName();
        void SetName(string n);
        string GetName();
        void SetScore(int[]);
        void SetAver();
        float GetAver ();
    private:
        string name;
        float average;
        int score[5];
};
int main() {
    Student st1;
    st1.SetName("Mustafa Keser");
    cout<<st1.GetName()<<endl;
    int marks[]={80,65,90,70,85};
    st1.SetScore(marks);
    st1.SetAver();
    cout<<st1.GetAver()<<endl;
}