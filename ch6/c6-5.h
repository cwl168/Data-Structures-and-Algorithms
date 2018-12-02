 // c6-5.h 赫夫曼树和赫夫曼编码的存储结构
 typedef struct 
 { unsigned int weight; 
   unsigned int parent,lchild,rchild;
 }HTNode,*HuffmanTree; 
 typedef char **HuffmanCode; 

