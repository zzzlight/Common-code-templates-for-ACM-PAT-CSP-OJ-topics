vector<int>prime;//素数表存储在prime中，prime是全局变量
void findPrime(int n){
    vector<bool>visit(n,false);
    for(int i=2;i<n;++i){
        if(!visit[i])
            prime.push_back(i);
        for(int j=0;j<prime.size()&&i*prime[j]<=n;++j){
            visit[i*prime[j]]=true;
            if(i%prime[j]==0)
                break;
        }
    }
}
