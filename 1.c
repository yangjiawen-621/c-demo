//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//typedef int Status;
//typedef  int ElemType;
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//#define LIST_INIT_SIZE  100 //���Ա�洢�ռ�ĳ�ʼ������
//
//typedef  struct
//{
//    ElemType* elem; //�洢�ռ��ַ�����ֶ�̬��
//    int   length;     //��ǰ��ĳ���
//}SqList;
//Status steMUl(SqList Lc, SqList La, SqList Lb);
//Status InitList_Sq(SqList L) {   //��ʼ��˳���
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
//    while (k != 0)   //����k�������δ���˳����У�ֱ��kΪ0
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
//    if (L.length == 0)   //������Ϊ���������ʾ
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
///* ����������д�� */
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