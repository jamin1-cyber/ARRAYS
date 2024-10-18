//A program of 2D arrray
#include <stdio.h>
int main() {
//Declaring a 2D array 
int score[2][3]= {{1,2,3},{4,5,6}};
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
//printing each element in 2D array 
printf("[%d][%d] = %d   " ,i,j,score[i][j]);
}
printf("\n");
}
return 0;
}
    