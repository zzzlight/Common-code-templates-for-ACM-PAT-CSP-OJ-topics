int demicalToR(int m,int z[],int R=10){
    int num=0;
    do{
        z[num++]=m%R;
        m/=R;
    }while(m!=0);
    reverse(z,z+num);
    return num;
}
