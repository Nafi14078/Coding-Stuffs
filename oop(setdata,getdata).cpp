#include<iostream>
using namespace std;

class person{
private:
    char name[100];
    int age;
    char country[100];

public:
    void setdata(void){
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    cout<<"Enter the country:"<<endl;
    cin>>country;


    }
    void getdata(void){

    cout<<"The name of the person is:"<<name<<endl;
    cout<<"The age of the person is:"<<age<<endl;
    cout<<"The country of the person is:"<<country<<endl;



    }
};

int main(){
person p;
p.setdata();
p.getdata();
return 0;
}
