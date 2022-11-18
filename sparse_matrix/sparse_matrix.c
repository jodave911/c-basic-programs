#include <stdio.h>

int main(){
  
  int sprmat[3][3]={ 
    { 0, 0, 3}, 
    { 0, 0, 5}, 
    { 0, 2, 6} 
  };


  int s=0;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(sprmat[i][j] != 0)
        s++;
    }
  }

  int res[3][s];
  
  int k; 
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(sprmat[i][j] !=0){
        res[0][k] = i;
        res[1][k] = j;
        res[2][k] = sprmat[i][j];
        k++;
      }
    }
  }

  printf("\nThe result is :\n");

  for(int i=0; i<3; i++){
    for(int j=0; j<s; j++){
      printf("%d ,", res[i][j]);
    }
    printf("\n");

  }
}
