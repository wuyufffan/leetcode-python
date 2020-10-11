
#include <iostream>
#include <cstring>
using namespace std;

class student {
public:
    char *name; //只是定义了指针，但是没有分配内存
    int age;

        student(char *n = "no_name", int a = 15){
            int len = strlen(n); //获取字符串长度
            name = new char[len + 1]; //创建变量
            strcpy(name, n);  //将n中的字符串拷贝到name中
            age = a;
        }

        void print(){
            cout << name << ":\t" << age << endl;
        }

        virtual ~student(){
            std::cout << "destructor!" << name <<std::endl;
            delete[] name;

        }
};

int main(){
    student s;
    //student k("John",56);
    //cout << k.name << ", age " << k.age << endl<< endl;
    student m(s); //拷贝构造函数
    //s = k; //赋值运算符
    cout << s.name << ", age " << s.age << endl << endl;
    cout << m.name << ", age " << m.age << endl << endl;
    
    return 0;
}