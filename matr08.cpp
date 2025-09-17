#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

double nalfunc(double arr[5],int size){
    double z=0;
    for (int i=0;i<5;i++){
        z=z+(arr[i])*0.13;
    }
    return z;
}

int min(double arr[5],int size){
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

double maxnumber(double arr[5],int size){
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

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5];
    int b[5];
    double zp[5];
    string workers;
    int goodworkers=0;
    for (int j=0;j<5;j++){
        int hours,money;
        cout <<"Введите данные для "<<j+1<<" работника"<<endl;
        cin >>hours>>money;
        a[j]=hours;
        b[j]=money;
    }
    for (int k=0;k<5;k++){
        zp[k]=a[k]*b[k]-(a[k]*b[k])*0.13;
    }
    for (int i=0;i<5;i++){
        if (zp[i]>50000){
            goodworkers=goodworkers+1;
            workers+=to_string(i+1)+" ";
        }
    }
    cout <<"Работник номер "<<min(zp,5)<<" получил меньше всего"<<endl;
    cout <<"Работник номер "<<maxnumber(zp,5)<<" получил самую большую зп "<<max(zp,5)<<endl;
    cout <<goodworkers<<" работников получило больше 50000"<<endl;
    cout <<workers<<" номера работников получивших больше 50000"<<endl;
    cout <<nalfunc(zp,5)<<" общая сумма налогов бригады"<<endl;
    
    return 0;   
}





    
    























