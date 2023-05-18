//
// Created by Poe on 01.05.2023.
//
#include<iostream>
#include<fstream>
#include<string.h>

int main(){
    
    int n=20;
    double p0[2]={0.50,};
    double k[3]={3.1,3.2,3.3};
    char out[256] ="C:\\Users\\Iulian\\Desktop\\logistic_sequences\\terms\\terms";
    char outNr[100][2]={"7", "8", "9"};

    int h=0;
    double p;
    double j = 0.5;
    int sizeOfp0 = sizeof(p0)/sizeof(double );
    int sizeOfk = sizeof(k)/sizeof(double);

    for(int x=0;x<sizeOfp0;x++){
        for(int y=0;y<sizeOfk;y++){
            p = p0[x];
            strcat(out,outNr[h]);
            strcat(out,".csv");
            std::ofstream fout(out);
            fout<<"a,b\n";
            for(int i=1;i<=n;i++){
                p = k[y] * p * (1-p);
                fout<<p * 10000  <<","<<j<<"\n";
                j+=0.5;
            }
            strcpy(out,"C:\\Users\\Iulian\\Desktop\\logistic_sequences\\terms\\terms");
            fout.close();h++;
        }
    }

}
