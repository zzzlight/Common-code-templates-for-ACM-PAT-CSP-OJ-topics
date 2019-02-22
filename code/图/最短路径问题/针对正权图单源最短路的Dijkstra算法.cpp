void Dijkstra(int vstart,int vend){  
    while(!visit[vend]){
        int MIN=INT_MAX,v=-1;  
        for(int i=0;i<N;++i){  
            if(!visit[i]&&dis[i]<MIN){  
                MIN=dis[i];  
                v=i;  
            }  
        }  
        if(v==-1)return;//v==-1表示是非连通图，直接返回  
        visit[v]=true;//标记为已访问  
        for(int i=0;i<graph[v].size();++i){  
            int temp=graph[v][i].v;  
            if(!visit[temp]&&dis[temp]>dis[v]+graph[v][i].length){  
                dis[temp]=dis[v]+graph[v][i].length;//更新最短路径长度  
            }
        }  
    }  
}
