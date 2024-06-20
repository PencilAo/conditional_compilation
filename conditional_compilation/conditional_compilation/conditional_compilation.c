#define _CRT_SECURE_NO_WARNINGS
////条件编译
// 
// 
// 
// 
#define __DEBUG__
int main()
{
    int i;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
#ifdef __DEBUG__
        printf("%d", arr[i]);  //如果__DEBUG__被定义则进入，不想进入就注释掉__DEBUG__ ， //__DEBUG__
#endif
    }
    return 0;
}
 
 
多分支的条件编译
#define M 3
int main()
{
#if M<5
    printf("hehe\n"); //打印
#elif M==5
    printf("haha\n");
#else
    printf("huhu\n");
#endif
    return 0;
}

 
判断是否被定义
#if defined(symbol)
或
#ifdef symbol

if !defined(symbol)
或
ifndef(symbol)
#define MAX 100
int main()
{
#if defined(MAX)
    printf("max");
#endif
//或
#ifdef MAX
    printf("max");
#endif


#if !defined(MAX);
    printf("max");
#endif
//或
#ifndef MAX
    printf("max");
#endif
    return  0;
}
//
//
//嵌套指令
//类似if语句