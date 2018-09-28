#include <stdio.h>
#include <math.h>

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
    int i,j,ans,x;
    ans=0;

    for (i=1;i<1000;i++){
        for (j=1;j<1000;j++){
            x=i*j;
            if (esPali(x)&& x>ans)
                ans=x;
            }
        }

    printf("El numero es : %dn",ans);
return 0;
}
