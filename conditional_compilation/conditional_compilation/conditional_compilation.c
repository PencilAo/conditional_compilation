#define _CRT_SECURE_NO_WARNINGS
////��������
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
        printf("%d", arr[i]);  //���__DEBUG__����������룬��������ע�͵�__DEBUG__ �� //__DEBUG__
#endif
    }
    return 0;
}
 
 
���֧����������
#define M 3
int main()
{
#if M<5
    printf("hehe\n"); //��ӡ
#elif M==5
    printf("haha\n");
#else
    printf("huhu\n");
#endif
    return 0;
}

 
�ж��Ƿ񱻶���
#if defined(symbol)
��
#ifdef symbol

if !defined(symbol)
��
ifndef(symbol)
#define MAX 100
int main()
{
#if defined(MAX)
    printf("max");
#endif
//��
#ifdef MAX
    printf("max");
#endif


#if !defined(MAX);
    printf("max");
#endif
//��
#ifndef MAX
    printf("max");
#endif
    return  0;
}
//
//
//Ƕ��ָ��
//����if���