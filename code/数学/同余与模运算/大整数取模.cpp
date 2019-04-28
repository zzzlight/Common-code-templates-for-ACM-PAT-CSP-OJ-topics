//输出n%m的值，其中n<=10^10,m<=10^9
int bigIntegerMod(const string&n,int m){
    int ans=0;
    for(int i=0;i<n.size();++i)
        ans=(int)((ans*10ll+n[i]-'0')%m);
    return ans;
}
