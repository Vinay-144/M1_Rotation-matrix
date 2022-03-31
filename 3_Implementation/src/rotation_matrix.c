#include<stdio.h>
#include<math.h>


void mult_matrix(float [][3],float,float,float);

void standard_matrix(float ,float ,float ,float  ,int ,int);





void standard_matrix(float a,float x,float y,float z ,int case_ ,int alt_case){
    float arr[3][3];

    if(alt_case > 3){
        printf("\nInvalid Input");
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
    
    
     mult_matrix(arr,x,y,z);
 
}





