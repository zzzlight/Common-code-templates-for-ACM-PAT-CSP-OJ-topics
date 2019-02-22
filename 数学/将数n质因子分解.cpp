map<int,int>factor;//质因子在factor中，键表示质因子，值表示该质因子个数，注意map会按键排序
void getFactor(int n){
    if(n==1){
        factor[1]=1;
        return;
    }
    findPrime(n+1);//打印n+1以内的素数表存储到prime中
    for(int i:prime){
        while(n%i==0){
            ++factor[i];
            n/=i;
        }
        if(n==1)
            break;
    }
}
