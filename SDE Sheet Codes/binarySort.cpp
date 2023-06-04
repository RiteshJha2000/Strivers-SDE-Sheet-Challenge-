#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(vector<int>&arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void selectionsort(vector<int>&sort){
int vecsize = sort.size();
for (int j = 0; j < vecsize - 1; ++j) {

    int min = j;
    for (int i = j+1; i < vecsize; ++i) {
        if (sort.at(min) > sort.at(i)) {
            min = i;
        }

    }  
    if (min != j)
        swap(sort.at(j), sort.at(min));
}
}

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            break;
        } 
    }
}


int binarysearch(vector<int>&arr,int n,int k){

    for(int i=0,j=n;i<=j;){
        int mid=(i+j)/2;
        if(arr[mid]==k)return mid;
        else if(arr[mid]>k){
            j=mid-1;
        }
        else i=mid+1;
    }
    return -1;

}

int main(){
    vector<int>test={111,3,34,22,56,678,123,1,879,12};
    selectionsort(test);
    bubbleSort(test,test.size());
    cout<<binarysearch(test,test.size(),56)<<endl;
    quickSort(test);
    
}