//A program of 3D arrray
#include <stdio.h>
int main() {
//Declaring a 3D array 
int score[2][3][3]= {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}}};
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
for(int k=0;k<3;k++){
//printing each element in 3D array 
printf("[%d][%d][%d] = %d  " ,i,j,k,score[i][j][k]);
}
printf("\n");
}
printf("\n \n");
}
return 0;
}
    