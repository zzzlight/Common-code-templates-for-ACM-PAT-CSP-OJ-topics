int strToDemical(const string&s,int R=10){
    int n=0;
    for(char c:s)
        n=n*R+(c-'0');
    return n;
}
