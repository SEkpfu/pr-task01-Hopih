#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int min(double arr[],int size){
    double z=9999999999999999;
    int index;
    for (int i=0;i<5;i++){
        if (arr[i]<z){
            z=arr[i];
            index=i;
        }
    }
    return index+1;
}

double max(double arr[5],int size){
    double max=0;
       for (int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

double maxnumber(double arr[],int size){
    double max=0;
    int numbermax;
    for (int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];
            numbermax=i;
        }
    }
    return numbermax+1;
}

int elem(double arr[],int size,int num){
    int d=0;
    int count = sizeof(arr) / sizeof(arr[0]); 
    for (int k=0;k<count;k++){
        if (arr[k]>num){
            d=d+1;
        }

    }
    return d;
}











