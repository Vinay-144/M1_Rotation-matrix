#include<stdio.h>
#include"header.h"



void mult_matrix(float [][3],float,float,float);
void mult_matrix_t(float [][4],float,float,float);
void Scaling_matrix(float ,float ,float ,float );
void translation_matrix(float ,float ,float , float , float , float );



int main(){
    float  x,y,z;
    int case_,alt_case;

    printf("Enter the operation to be done :\n1. for converting co-ordinates from reference co-ordinates to rotated co-ordinates\n2. for converting co-ordinates from rotated co-ordinates to reference co-ordinates\n3. for scaling\n4. for translate\n");
    scanf("%d",&case_);
    if(case_ ==3){
        float k;
        alt_case= 0;
        printf("Enter the value co-ordinates:\n");
        scanf("%f%f%f",&x,&y,&z);
        printf("Enter the value scaling value:\n");
        scanf("%f",&k);

        Scaling_matrix(x,y,z,k);


    }
    else if(case_==4){
        alt_case=0;
        float u,v,w;
        printf("Enter the value co-ordinates:\n");
        scanf("%f%f%f",&x,&y,&z);
        printf("Enter the value co-ordinates along which it must be translated:\n");
        scanf("%f%f%f",&u,&v,&w);
    
        translation_matrix(x,y,z,u,v,w);
    }
    else if(case_ <3 && case_>0){ 
        float m;
    
    
    printf("Enter the axis in which action need to be done\n1. for OX axis\n2. for OY axis\n3. for OZ axis\n");
    scanf("%d",&alt_case);
    
    printf("Enter the rotation angle:\n");
    scanf("%f",&m);

    printf("Enter the value co-ordinates:\n");
    scanf("%f%f%f",&x,&y,&z);

    m=(3.14)*m/180;
    standard_matrix(m,x,y,z,case_,alt_case);
    }
    else {
        printf("invalid input\n");
    }
    return 0;


}