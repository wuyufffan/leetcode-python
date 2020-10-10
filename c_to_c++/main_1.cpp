
#include <iostream>
#include <cstring>
using namespace std;

struct student {
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
    }
};

void f(){
    student stu1;
    stu1.print();
    student stu2("wang");
    stu2.print();
    student stu3("zhang",23);
    stu3.print();
}
int main(){
    f();
    return 0;
}