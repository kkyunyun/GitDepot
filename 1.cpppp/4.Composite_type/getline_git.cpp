#include<iostream>
using namespace std;
int main(){
    const int ArSize =20;
    char name[ArSize];
    char dessert[ArSize];
    cout<<"What year was your house built?"<<endl;
    int year;
    cin>>year;
    cin.get();//cin读取到输入的内容时会把换行符留在队列中需要清除该换行符以便后续读取正常运行
    cout<<"Enter your name:"<<endl;
    cin.get(name,ArSize).get();//get()用来处理换行符，为读取下一行输入准备
    cout<<"enter your favorite dessert"<<endl;
    cin.getline(dessert,ArSize);
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<endl;
    system("pause");
    return 0;
}