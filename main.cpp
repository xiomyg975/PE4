#include <iostream>

using namespace std;
/*
long long palindromo (long long x){
   long long a , numero ,c=0,d;
   a=numero;
   while(numero >0){
    d=numero%10;
    numero =numero/10;
    c=c*10+d;}
    if (a==c){
        return 1;}

}

int numeros(long long n){
    long long res=0 ;
    for(long long i=1 ; i<1000; i++){
        for(long long j=1 ;j<1000;j++){
            if(j*i==palindromo(i)){
                palindromo(i)=res;
            }
        }

    }
    return res;
}
int main ()
{
    int x =
}
*/



int esPali(int n){
    int copia = n;
    int complement = 0;

  while (copia>0){
        complement = complement * 10 + copia % 10;
        copia/=10;
  }

  if (complement==n)
        return 1;
    return 0;
}

int main(){
    int i,j,res,x;
    res=0;

    for (i=1;i<1000;i++){
        for (j=1;j<1000;j++){
            x=i*j;
            if (esPali(x)&& x>res)
                res=x;
            }
        }

    cout << " El numero palindrome es :" << res << endl ;
return 0;
}
