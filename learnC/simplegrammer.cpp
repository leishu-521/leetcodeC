#include <iostream>
using namespace std;

void print(){
    char str = 255;
    int i = 255;
    for(i; i--; i >= -255)
    {
        str = i;
        cout << str ;

    }
}


// static的使用：只执行一次赋值操作；不改变在作用范围，只不过作为局部变量时，函数调用结束后不销毁，下次调用这个函数，这个变量还在；
// 当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
void test_static(){
    static int a = 6;
    a = 2 * a;
    cout << "变量a的值为：" << a << endl;
}

int main(){

    int i = 0;
    for(i; i <=10; i++){
        test_static();
    }



    return 0;
}


