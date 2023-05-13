#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        void SetName(){
            name = "";
        }
        void SetName(string n){
            name = n;
        }
        string GetName(){
            return name;
        }
        void SetScore(int arr[]){
            for(int i=0;i<5;i++){
                score[i] = *arr++;
            }
        }
        void SetAver(){
            int sum = 0;
            for(int i=0;i<5;i++){
                sum += score[i];
            }
            average = sum/5;
        }
        float GetAver (){
            return average;
        }
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
    return 0;
}