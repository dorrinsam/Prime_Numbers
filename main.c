#include <stdio.h>
#include <math.h>

int main(){

    int i, j, a, b, sq;
    int PrimeNums = 1;
      scanf("%d%d", &a, &b);

        for(i = a; i <= b; i++){
                if(i % 2 == 0 && i != 2){
                    continue;
                }
                else{
          sq = sqrt(i);
            for(j = 3; j <= sq; j+=2){
              if(i % j == 0){
                PrimeNums = 0;
                   break;
                                       }
                                            }
                if(PrimeNums != 0){
                  if(i != 1)
    {
                     printf("%d\n", i);
                       PrimeNums = 1;

                                    }
                                        }
                   else{
                       PrimeNums = 1;
                                            }
                                                }
        }
                                                    }
