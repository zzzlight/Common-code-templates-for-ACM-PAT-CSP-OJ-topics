//把R进制字符串s转换成十进制数
int strToDemical(const string&s,int R=10){
    int n=0;
    for(char c:s)
        n=n*R+(c-'0');
    return n;
}
//把十进制数m转换成R进制数组z
int demicalToR(int m,int z[],int R=10){
    int num=0;
    do{
        z[num++]=m%R;
        m/=R;
    }while(m!=0);
    reverse(z,z+num);
    return num;
}
