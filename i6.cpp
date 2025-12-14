#include &lt;iostream&gt;
using namespace std;

void merge(int a[], int l, int m, int r){
    int n1=m-l+1, n2=r-m;
    int L[n1], R[n2];

    for(int i=0;i&lt;n1;i++) L[i]=a[l+i];
    for(int j=0;j&lt;n2;j++) R[j]=a[m+1+j];

    int i=0,j=0,k=l;
    while(i&lt;n1 && j&lt;n2){
        if(L[i] &lt;= R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
    }
    while(i&lt;n1) a[k++]=L[i++];
    while(j&lt;n2) a[k++]=R[j++];
}

void mergesort(int a[], int l, int r){
    if(l&lt;r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int price[]={40,10,30,20};
    mergesort(price,0,3);
    for(int x:price) cout &lt;&lt; x &lt;&lt; " ";
}
