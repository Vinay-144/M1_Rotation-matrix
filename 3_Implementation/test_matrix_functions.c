#include<stdio.h>
#include<math.h>
#include "unity.h"

float test_mult_matrix(float [][3],float,float,float);
float test_mult_matrix_t(float [][4],float,float,float);
float test_standard_matrix(float ,float ,float ,float ,int ,int);
float test_translation_matrix(float ,float ,float , float , float , float );
float test_Scaling_matrix(float ,float ,float ,float );


void test_for_functions(){

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,1,1));
    TEST_ASSERT_EQUAL_FLOAT(2.050644,test_standard_matrix(45,1,1,1,1,1));

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,1,2));
    TEST_ASSERT_EQUAL_FLOAT(1.308503,test_standard_matrix(30,1,1,1,1,2));

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,1,3));
    TEST_ASSERT_EQUAL_FLOAT(-0.9048259,test_standard_matrix(60,1,1,1,1,3));

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,2,1));
    TEST_ASSERT_EQUAL_FLOAT(0.1038528,test_standard_matrix(90,1,1,1,2,1));

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,2,2));
    TEST_ASSERT_EQUAL_FLOAT(2.050644,test_standard_matrix(45,1,1,1,2,2));

    TEST_ASSERT_EQUAL_FLOAT(0,test_standard_matrix(30,0,0,0,2,3));
    TEST_ASSERT_EQUAL_FLOAT(1.308503,test_standard_matrix(30,1,1,1,2,3));

    TEST_ASSERT_EQUAL_FLOAT(9,test_Scaling_matrix(1,1,1,3));
    TEST_ASSERT_EQUAL_FLOAT(0,test_Scaling_matrix(0,0,0,3));

    TEST_ASSERT_EQUAL_FLOAT(6,test_translation_matrix(1,1,1,1,1,1));
    TEST_ASSERT_EQUAL_FLOAT(12,test_translation_matrix(2,2,2,2,2,2));

    
    

}





float test_Scaling_matrix(float x,float y,float z,float k){

    float arr[3][3]={{k,0,0},{0,k,0},{0,0,k}};

    test_mult_matrix(arr,x,y,z);

}

float test_translation_matrix(float x,float y,float z, float u, float v, float w){

    float arr[4][4]={{1,0,0,u},{0,1,0,v},{0,0,1,w}};
    
    test_mult_matrix_t(arr,x,y,z);
}
float test_mult_matrix(float arr[][3],float x,float y,float z){

    float mult_arr[3]={0};
    float sum=0;
 
 

         for(int i=0;i<3;i++){
            mult_arr[i]=arr[i][0]*x+arr[i][1]*y+arr[i][2]*z;

         } 
         for(int i=0;i<3;i++){
             sum=sum+mult_arr[i];

         }
         return sum;

}
float test_mult_matrix_t(float arr[][4],float x,float y,float z){

    float mult_arr[4]={0};
    float sum=0;
 
 

         for(int i=0;i<4;i++){
            mult_arr[i]=arr[i][0]*x+arr[i][1]*y+arr[i][2]*z+arr[i][3]*1;

         } 
         for(int i=0;i<4;i++){
            sum+=mult_arr[i];

         } 
         

         return sum;

}

float test_standard_matrix(float a,float x,float y,float z ,int case_ ,int alt_case){
    float arr[3][3];

    if(alt_case > 3){
        return -1;
    }
    


    
    //forward kinematic cases (case = 1).
    // Direct multiplication.
    else if(case_==1 && alt_case==1){
    
    
         float arr[3][3]={{1,0,0},{0,cos(a),-sin(a)},{0,sin(a),cos(a)}};
    }

    else if(case_ == 1 && alt_case==2){

        float arr[3][3]={{cos(a),0,sin(a)},{0,1,0},{-sin(a),0,cos(a)}};

    }
    else if(case_ ==1 && alt_case ==3){

        float arr[3][3]={{cos(a),-sin(a),0},{sin(a),cos(a),0},{0,0,1}};

    }
    // Inverse kinematic cases (case = 2).
    // Transpose matrix multification.

    else if(case_ ==2 && alt_case ==1){

        float arr[3][3]={{1,0,0},{0,cos(a),sin(a)},{0,-sin(a),cos(a)}};
        
    }
    
    else if(case_ ==2 && alt_case ==2){

        float arr[3][3]={{cos(a),0,-sin(a)},{0,1,0},{sin(a),0,cos(a)}};
        
    }
    
    else if(case_ ==2 && alt_case ==3){

        float arr[3][3]={{cos(a),sin(a),0},{-sin(a),cos(a),0},{0,0,1}};
        
    }
    
    
    return test_mult_matrix(arr,x,y,z);
 
}