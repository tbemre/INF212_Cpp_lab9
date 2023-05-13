#include <iostream>
#include <string>
using namespace std;
class Automobile{
    public:
        Automobile(){
            brand = "Ford";
            model = "Cingan kasa Transit";
            pdate = 1998;
            color = "White";
        }
        Automobile(string b,string m,int pd,string c){
            brand = b;
            model = m;
            pdate = pd;
            color = c;
        }
        void Setbrand(string b){
            brand = b;
        }
        void Setmodel(string m){
            model = m;
        }
        void Setpdate(int pd){
            pdate = pd;
        }
        void Setcolor(string c){
            color = c;
        } 
        string Getbrand(){
            return brand;
        }
        string Getmodel(){
            return model;
        }
        int Getpdate(){
            return pdate;
        } 
        string Getcolor(){
            return color;
        } 
        void Print(){
            cout<<brand<<"\t"<<model<<"\t"<<pdate<<"\t"<<color<<endl;
        }
    private:
        string brand; 
        string model;
        int pdate;
        string color;
};
int main(){
    Automobile A; 
    Automobile B("Tofas","Sahin SLX 1.4 Cakal Kasa Edition",1990,"Black");
    A.Print();
    B.Print(); 
    return 0;
}