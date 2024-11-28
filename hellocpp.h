#ifndef HELLOCPP_H   // 防止重复包含
#define HELLOCPP_H

#ifdef __cplusplus
extern "C" {  // C++ 中的函数需要放在 extern "C" 中，避免名字修饰
#endif

    // 声明 hello_world 函数，C 语言和 C++ 语言都可以调用
    void hello_world();

#ifdef __cplusplus
}
#endif

#endif  // HELLO_H
