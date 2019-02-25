struct Node{//结点类
    int data,father,level;//权值、父节点在pre中的下标、深度
    Node(int d=0,int f=-1,int l=0):data(d),father(f),level(l){}
};
Node tree[MAX];
int LCA(int a,int b){//倍增法解LCA问题，返回最近公共祖先在tree中的下标
    int ia=-1,ib=-1;
    for(int i=0;i<n;++i){//找到两个结点在pre数组中的下标
        if(tree[i].data==a)
            ia=i;
        if(tree[i].data==b)
            ib=i;
    }
    if(ia==-1||ib==-1)//结点不在树中，返回-1
        return -1;
    if(pre[ia].level<pre[ib].level)//让ia指向深度更大的结点
        swap(ia,ib);
    while(pre[ia].level>pre[ib].level)//将二者调整到同一深度
        ia=pre[ia].father;
    while(ia!=ib){//ia,ib同时向上调整，直至二者指向同一结点
        ia=pre[ia].father;
        ib=pre[ib].father;
    }
    return ia;
}
