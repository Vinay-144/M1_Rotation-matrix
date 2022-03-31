
#include "unity.h"
extern void test_for_functions();

void setUp(void)
{

}

void tearDown(void){

}

int main(){
    
    UnityBegin(NULL);
    RUN_TEST(test_for_functions);
    return (UnityEnd());
}

