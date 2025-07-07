//Max and Min element of an array

#include <iostream>
using namespace std;

int main() {
    int n,sum = 0;
    cout<<"Enter number of elements: "; 
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    } 
    int min=arr[0],max =arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
    return 0;
}

//Reverse an array
#include <iostream>
using namespace std;

void rev(int arr[], int n){
    int temp;
    int start=0, end=n-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rev(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}

//Frequency of a given element
#include <iostream>
using namespace std;

int main(){
    int n;
    int  arr[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int find;
    cin >> find;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==find){
         count++;
        }
    }
    cout << "Frequency: "<< count;
}

// Linear search
#include <iostream>
using namespace std;

int linear(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int n;
    cin >> n;
    int arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int res = linear(arr, n, target);
    if (res != -1) {  
        cout << "Element found at: " << res << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}