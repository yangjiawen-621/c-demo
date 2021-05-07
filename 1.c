//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//typedef int Status;
//typedef  int ElemType;
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//#define LIST_INIT_SIZE  100 //线性表存储空间的初始分配量
//
//typedef  struct
//{
//    ElemType* elem; //存储空间基址，体现动态性
//    int   length;     //当前表的长度
//}SqList;
//Status steMUl(SqList Lc, SqList La, SqList Lb);
//Status InitList_Sq(SqList L) {   //初始化顺序表
//    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!L.elem) return (OVERFLOW);
//    L.length = 0;
//    return OK;
//}//InitList_Sq
//Status Listinput(SqList L)
//
//    int i, k;
//    scanf_s("%d", &k);
//    i = 0;
//    while (k != 0)   //输入k将其依次存入顺序表中，直到k为0
//    {
//        L.elem[i] = k;
//        L.length++;
//        i++;
//        scanf_s("%d", &k);
//    }
//    return OK;
//}
//
//Status print_List(SqList L)
//{
//    if (L.length == 0)   //若集合为空则给出提示
//        printf("empty class");
//    else
//        for (int i = 0; i < L.length; i++)
//            printf("%d ", L.elem[i]);
//    return OK;
//}
//int main()
//{
//    SqList La, Lb, Lc;
//    InitList_Sq(La);
//    InitList_Sq(Lb);
//    InitList_Sq(Lc);
//    Listinput(La);
//    Listinput(Lb);
//    steMUl(Lc, La, Lb);
//    print_List(Lc);
//    return 0;
//}
//
///* 请在这里填写答案 */
//Status steMUl(SqList Lc, SqList La, SqList Lb)
//{
//    int n = 0;
//    for (int i = 0; i < La.length; i++)
//    {
//        for (int j = 0; j < Lb.length; j++)
//        {
//            if (La.elem[i] == Lb.elem[j])
//            {
//                Lc.elem[n] = La.elem[i];
//                n++;
//                break;
//            }
//        }
//    }
//}