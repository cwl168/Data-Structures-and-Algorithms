 // main3-1.cpp 检验bo3-1.cpp的主程序
 #include"c1.h"
 typedef int SElemType; 
 #include"c3-1.h" 
 #include"bo3-1.cpp" 
 #define ElemType SElemType 
 #include"func2-2.cpp" 

 void main()
 {
   int j;
   SqStack s;
   SElemType e;
   InitStack(s); 
   for(j=1;j<=12;j++)
     Push(s,j); 
   printf("栈中元素依次为");
   StackTraverse(s,print); 
   Pop(s,e); 
   printf("弹出的栈顶元素e=%d\n",e);
   printf("栈空否？%d(1:空 0:否)，",StackEmpty(s));
   GetTop(s,e); 
   printf("栈顶元素e=%d，栈的长度为%d\n",e,StackLength(s));
   ClearStack(s); 
   printf("清空栈后，栈空否？%d(1:空 0:否)\n",StackEmpty(s));
   DestroyStack(s); 
   printf("销毁栈后，s.top=%u，s.base=%u，s.stacksize=%d\n",s.top,s.base,s.stacksize);
 }

