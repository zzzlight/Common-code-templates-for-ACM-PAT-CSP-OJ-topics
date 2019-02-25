int father[MAX];
void init(int n){//初始化并查集
    iota(father,father+n,0);
}
int findFather(int x){//寻找根结点并进行路径压缩
    if(x==father[x])
        return x;
    int temp=findFather(father[x]);
    father[x]=temp;
    return temp;
}
void unionSet(int a,int b){//合并两个集合
    int ua=findFather(a),ub=findFather(b);
    if(ua!=ub)
        father[ua]=ub;
}
int countRoot(int n){//求出并查集中有几个集合
    int num=0;
    for(int i=0;i<n;++i)
        if(father[i]==i)
            ++num;
    return num;
}
