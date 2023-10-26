#include <iostream>
#include <cstring>
using namespace std;
void arr();
// void twofind(int &arr, int a);




//打印数组地址
void arr(){
    int array[2][3]={
        {0, 1, 2},
        {3, 4, 5}
    };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[0][2] << endl;

}

// 二分查找:给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
void twofind(int &arr, int a){
    cout << sizeof(arr) << endl;

}


int main(){

    int arr[5] = {0, 1, 2, 3, 4};
    twofind(arr, 3);
    
}
