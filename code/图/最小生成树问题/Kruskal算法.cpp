priority_queue<Edge>edges;//边的优先级队列
int father[MAX];
int findFather(int x){//查找父亲结点并进行路径压缩
    if(x==father[x])
        return x;
    int temp=findFather(father[x]);
    father[x]=temp;
    return temp;
}
int Kruskal(){//求解最小生成树的权值之和
	iota(father,father+MAX,0);//初始化并查集
    int sumCost=0; //sumCost表示整棵最小生成树的各边权值之和
    while(!edges.empty()){
        Edge e=edges.top();
        edges.pop();//弹出当前队列中边权最小的边
        int ua=findFather(e.from),ub=findFather(e.to);
        if(ua!=ub){
            sumCost+=e.cost;
            father[ua]=ub;
        }
    }
    return sumCost;//返回整棵树的权值之和
}
