vector<int>prime;//素数表存储在prime中，prime是全局变量
void findPrime(int n){
    vector<bool>f(n,false);
    for(int i=2;i<n;++i)
        if(!f[i]){
            prime.push_back(i);
            for(int j=i+i;j<n;j+=i)
                f[j]=true;
        }
}
