#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    int vetor1[10] = {-2, -8, 6, 7, -3, 10, 1, 0, -3 ,7};
    int vetor2[10];
    int j = 0;

    for(int i = 0; i <= 10; i++){      
      if(vetor1[i] > 0){
        vetor2[j] = vetor1[i];
        j++;
      }
    }

    for(int i = 0; i <= 10; i++){
      cout << vetor2[i] << " ";
    }

    //system("pause");
    return 0;
}