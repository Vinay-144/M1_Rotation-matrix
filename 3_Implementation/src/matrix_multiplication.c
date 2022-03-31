#include<stdio.h>

#include"header.h"








void Scaling_matrix(float x,float y,float z,float k){

    float arr[3][3]={{k,0,0},{0,k,0},{0,0,k}};

    mult_matrix(arr,x,y,z);

}

void translation_matrix(float x,float y,float z, float u, float v, float w){

    float arr[4][4]={{1,0,0,u},{0,1,0,v},{0,0,1,w}};
    
    mult_matrix_t(arr,x,y,z);
}
void mult_matrix(float (*arr)[3],float x,float y,float z){

    float mult_arr[3]={0};
 
 

         for(int i=0;i<3;i++){
            mult_arr[i]=arr[i][0]*x+arr[i][1]*y+arr[i][2]*z;

         } 
         printf("rotated co-ordinates are:");

         for(int i=0;i<3;i++){
     
           printf("\n%2.3f",mult_arr[i]);

         }

}
void mult_matrix_t(float (*arr)[4],float x,float y,float z){

    float mult_arr[4]={0};
 
 

         for(int i=0;i<4;i++){
            mult_arr[i]=arr[i][0]*x+arr[i][1]*y+arr[i][2]*z+arr[i][3]*1;

         } 
         printf("translated co-ordinates are:");

         for(int i=0;i<3;i++){
     
           printf("\n%2.3f\n",mult_arr[i]);

         }

}
