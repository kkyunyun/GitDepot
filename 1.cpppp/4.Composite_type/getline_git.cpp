#include<iostream>
using namespace std;
int main(){
    const int ArSize =20;
    char name[ArSize];
    char dessert[ArSize];
    cout<<"Enter your name:"<<endl;
    cin.get(name,ArSize).get();//get()用来处理换行符，为读取下一行输入准备
    cout<<"enter your favorite dessert"<<endl;
    cin.getline(dessert,ArSize);
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<endl;
    system("pause");
    return 0;
}