#include <iostream>
#include "hellocpp.h"  // 包含头文件

// 使用 extern "C" 来确保 C 语言能够调用该函数
void hello_world() {
    std::cout << "Hello, World!" << std::endl;
}
