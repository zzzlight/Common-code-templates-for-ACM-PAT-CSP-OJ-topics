void getNext(string pattern,int*next){
    int j=-1;
    next[0]=-1;
    for(int i=1;i<pattern.size();++i){
        while(j!=-1&&pattern[i]!=pattern[j+1])
            j=next[j];
        if(pattern[i]==pattern[j+1])
            ++j;
        next[i]=j;
    }
}
bool KMP(string text,string pattern){
    int next[pattern.size()];
    getNextval(pattern,next);
    for(int i:next)
        printf("%d ",i);
    int j=-1;
    for(int i=0;i<text.size();++i){
        while(j!=-1&&text[i]!=pattern[j+1])
            j=next[j];
        if(text[i]==pattern[j+1])
            ++j;
        if(j==pattern.size()-1)
            return true;
    }
    return false;
}
void getNextval(string pattern,int*next){
    int j=-1;
    next[0]=-1;
    for(int i=1;i<pattern.size();++i){
        if(j!=-1&&pattern[i]!=pattern[j+1])
            j=next[j];
        if(pattern[i]==pattern[j+1])
            ++j;
        if(j==-1||pattern[i+1]!=pattern[j+1])
            next[i]=j;
        else
            next[i]=next[j];
    }
}
int KMPcount(string text,string pattern){
    int next[pattern.size()];
    getNextval(pattern,next);
    for(int i:next)
        printf("%d ",i);
    int j=-1,result=0;
    for(int i=0;i<text.size();++i){
        while(j!=-1&&text[i]!=pattern[j+1])
            j=next[j];
        if(text[i]==pattern[j+1])
            ++j;
        if(j==pattern.size()-1){
            ++result;
            j=next[j];
        }
    }
    return result;
}
