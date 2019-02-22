//在有序序列v中查找某数k的位置，二分区间为左闭右闭的区间[left,right]
int binarySearch(vector<int>&v,int left,int right,int value){
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(v[mid]==value)
            return mid;
        else if(v[mid]<value)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}
//寻找有序序列中第一个满足某条件的位置，二分区间为左闭右闭的区间[left,right]
int solve(vector<int>&v,int left,int right){
    int mid;
    while(left<right){
        mid==left+(right-left)/2;
        if(条件成立)
            right=mid;
        else
            left=mid+1;
    }
    return left;
}
