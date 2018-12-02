 // func5-4.cpp 广义表的主函数，main5-4.cpp和main5-5.cpp调用
 void main()
 {
   char p[80];
   SString t;
   GList n,m;
   InitGList(n); 
   printf("空广义表n的深度=%d，n是否空？%d(1:是 0:否)\n",GListDepth(n),
   GListEmpty(n));
   printf("请输入广义表n(书写形式：空表:()，单原子:(a)，其他:(a,(b),c))：\n");
   gets(p); 
   StrAssign(t,p); 
   CreateGList(n,t); 
   printf("广义表n的长度=%d，",GListLength(n));
   printf("深度=%d，n是否空？%d(1:是 0:否)\n",GListDepth(n),GListEmpty(n));
   printf("遍历广义表n：");
   Traverse_GL(n,print2); 
   CopyGList(m,n); 
   printf("\n复制广义表m=n，m的长度=%d，",GListLength(m));
   printf("m的深度=%d\n遍历广义表m：",GListDepth(m));
   Traverse_GL(m,print2); 
   DestroyGList(m); 
   m=GetHead(n); 
   printf("\nm是n的表头元素，遍历m：");
   Traverse_GL(m,print2); 
   DestroyGList(m); 
   m=GetTail(n); 
   printf("\nm是由n的表尾形成的广义表，遍历广义表m：");
   Traverse_GL(m,print2); 
   InsertFirst_GL(m,n); 
   printf("\n插入广义表n为m的表头，遍历广义表m：");
   Traverse_GL(m,print2); 
   DeleteFirst_GL(m,n); 
   printf("\n删除m的表头，并由n指向m的表头，遍历广义表m：");
   Traverse_GL(m,print2); 
   printf("\n遍历广义表n(广义表m的原表头)：");
   Traverse_GL(n,print2); 
   printf("\n");
   DestroyGList(m); 
   DestroyGList(n);
 }

