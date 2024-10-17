// 3D array in C.
/*
Author:Nkonge william Nkonge
Reg: CT101/G/22542/24
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int Marks[2][2][3]={ {{50,90,60},{40,70,40}},{{50,90,60},{40,30,70}} };
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			for (k=0;k<3;k++){
				printf("Marks[%d][%d][%d] = %d\n",i,j,k,Marks[i][j][k]);}}}
				return 0;
}