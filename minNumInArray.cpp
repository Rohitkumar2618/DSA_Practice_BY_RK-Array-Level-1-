#include<iostream>
#include<limits.h>
using namespace std;

int main(){

int arr[]={ 20,4,15,2,6,8,11};

int n = 7;
int minAns = INT_MAX;

for(int i=0;i<n;i++)


if(arr[i]< minAns){

minAns = arr[i];

}
cout<<minAns;

}