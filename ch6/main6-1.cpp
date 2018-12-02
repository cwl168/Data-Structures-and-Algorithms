 // main6-1.cpp 检验bo6-1.cpp的主程序，利用条件编译选择数据类型为char或int
 // #define CHAR 1 // 字符型。第2行
 #define CHAR 0 
 #include"func6-1.cpp" 
 #include"c6-1.h" 
 #include"bo6-1.cpp" 

 void main()
 {
   Status i;
   int j;
   position p;
   TElemType e;
   SqBiTree T,s;
   InitBiTree(T); 
   CreateBiTree(T); 
   printf("建立二叉树后，树空否？%d(1：是 0：否)。树的深度=%d。\n",BiTreeEmpty(T),
   BiTreeDepth(T));
   i=Root(T,e); 
   if(i) 
     printf("二叉树的根为"form"。\n",e);
   else
     printf("树空，无根。\n");
   printf("层序遍历二叉树：\n");
   LevelOrderTraverse(T,visit); 
   printf("中序遍历二叉树：\n");
   InOrderTraverse(T,visit); 
   printf("后序遍历二叉树：\n");
   PostOrderTraverse(T,visit); 
   printf("请输入待修改结点的层号 本层序号：");
   scanf("%d%d",&p.level,&p.order);
   e=Value(T,p); 
   printf("待修改结点的原值为"form"，请输入新值：",e);
   scanf("%*c"form"%*c",&e);
   Assign(T,p,e); 
   printf("先序遍历二叉树：\n");
   PreOrderTraverse(T,visit); 
   printf("结点"form"的双亲为"form"，左右孩子分别为",e,Parent(T,e));
   printf(form"、"form"，左右兄弟分别为",LeftChild(T,e),RightChild(T,e));
   printf(form"、"form"。\n",LeftSibling(T,e),RightSibling(T,e));
   InitBiTree(s); 
   printf("建立右子树为空的树s：\n");
   CreateBiTree(s); 
   printf("树s插到树T中，请输入树T中树s的双亲结点 s为左(0)或右(1)子树：");
   scanf(form"%d",&e,&j);
   InsertChild(T,e,j,s);
   
   Print(T); 
   printf("删除子树，请输入其根结点的双亲的层号 本层序号 其为双亲的左(0)或右(1)子树：");
   scanf("%d%d%d",&p.level,&p.order,&j);
   DeleteChild(T,p,j); 
   Print(T); 
   ClearBiTree(T); 
   printf("清空二叉树后，树空否？%d(1：是 0：否)。树的深度=%d。\n",BiTreeEmpty(T),
   BiTreeDepth(T));
   i=Root(T,e); 
   if(i) 
     printf("二叉树的根为"form"。\n",e);
   else 
     printf("树空，无根。\n");
 }

