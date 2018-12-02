 // bo6-6.cpp main6-4.cpp和algo7-3.cpp调用
 void PreOrderTraverse(CSTree T,void(*Visit)(TElemType))
 { 
   if(T)
   { Visit(T->data); 
     PreOrderTraverse(T->firstchild,Visit); 
     PreOrderTraverse(T->nextsibling,Visit); 
   }
 }

