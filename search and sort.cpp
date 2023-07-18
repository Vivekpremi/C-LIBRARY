/*
//finding max, min in array
#include<iostream>
#include<climits>

using namespace std;

int main() {
    int    maxNO=INT_MIN;
    int minNO=INT_MAX;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
    cin>>arr[i];
        if(maxNO<=arr[i]) {
            maxNO=arr[i];
        }
        else if(minNO>=arr[i]) {
            minNO=arr[i];
        }

    }
    cout<<maxNO<<endl;
    cout<<minNO<<endl;
}

*/

///////////////////////////////////////////////////////////////
/*
//LINEAR SEARCH
#include<iostream>

using namespace std;

int linearSEARCH(int n,int e) {
        int arr[n];
        cout<<"give elements of the array:";
        for(int i=0; i<n; i++) {

            cin>>arr[i];
        }

        for(int j=0; j<n; j++) {
            if(arr[j]==e) {
                return j;
            }
        }
        return -1;

           }

int main() {
cout<<"element to search:";
    int e;
    cin>>e;
    cout<<"no. of elements:";
    int n;
    cin>>n;

    cout<<linearSEARCH(n,e);

    return 0;
    }

*/
///////////////////////////////////////////////////////////////

/*
//binary search

#include<iostream>

using namespace std;

int binSEARCH(int n,int y) {
    int a[n];

    cout<<"give elements of the array:";
    for(int i=0; i<n; i++) {

        cin>>a[i];
    }


    int s=0;

    int e=n;
    while(s<=e) {
        int mid=(s+e)/2;
        if(y==a[mid]) {
            return mid;
        }
        else if(y>a[mid]) {
            s=mid+1;
        }
        else {
            e=mid-1;
        }
    }
    return -1;
}

int main() {
    cout<<"element to search:";
    int y;
    cin>>y;
    cout<<"no. of elements:";
    int n;
    cin>>n;

    cout<<binSEARCH(n,y);

    return 0;
}
*/

/////////////////////////////////////////////////////////////

//new discovery sort
/*
#include<iostream>

using namespace std;

void sort(int a[],int n) {
    int c=0;
    while(c<n-1) {
        for(int i=0; i<n-1; i++) {
            if(a[i]>a[i+1]) {
                int x=a[i];
                int y=a[i+1];
                a[i+1]=x;
                a[i]=y;
            }
            else {
                c=c+1;
            }
        }
        if(c!=n-1) {
            c=0;
        }

    }
    for(int m=0; m<n; m++) {
         cout<<a[m]<<" ";
    }
}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {

        cin>>arr[i];
    }
    sort(arr,n);
}
*/

///////////////////////////////////////////////////////////////////////////////
/*
//selection sort
//(increasing order)
#include<iostream>

using namespace std;

void selesort(int a[],int n) {
for(int i=0;i<n-1;i++){//if we set i [0,n) and j also the same
for(int j=i+1;j<n;j++){//it is printing descending order
if (a[j]>a[i]){
int y=a[i];
a[i]=a[j];
a[j]=y;
}
}
}
for(int m=0; m<n; m++) {
         cout<<a[m]<<" ";
}
}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {

        cin>>arr[i];
    }
    selesort(arr,n);
}
*/
//////////////////////////////////////////////////////////////////////////

/*
//bubblre sort
#include<iostream>

using namespace std;

void bsort(int a[],int n) {
    int counter =1;
    while(counter<n) {

        for(int i=0; i<n-counter; i++) {
            if(a[i]>a[i+1]) {//a[n-1] ko i+1 reach karega isliye counter ka initialization 1 rakha aur i<n-counter kiya
                int x=a[i];
                int y=a[i+1];
                a[i+1]=a[i];
                a[i]=y;
            }
        }
        counter++;
    }



    
}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {

        cin>>arr[i];
    }
    bsort(arr,n);
    for(int m=0; m<n; m++) {
        cout<<a[m]<<" ";
    }
    }
*/
////////////////////////////////////////////////////////////////////////////////////

//insertion sort
#include<iostream>

using namespace std;

void Isort(int arr[],int n) {

    for(int i=1; i<n; i++) {
       int current=arr[i];

        int j=i-1;

        while(j>=0 && arr[j]>=current) {
            arr[j+1]=arr[j];//shifting every element one position ahead until we find correct position for current
            j--;
        }
        arr[j+1]=current;//Now after finding the orrect place for current, we will store its value at that position
    }
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {

        cin>>arr[i];
    }
    Isort(arr,n);
    for(int m=0; m<n; m++) {
        cout<<arr[m]<<" ";
    }
}