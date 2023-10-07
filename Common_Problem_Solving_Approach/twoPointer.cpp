void twoPointer(){
    vector <int> v={1,2,3,4,5,6};
    int x=6;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]+v[j]==x){
            cout<<i<<" "<<j<<endl;
            break;
        }
        else if(v[i]+v[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
}