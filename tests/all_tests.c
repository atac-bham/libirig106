#include "unity_fixture.h"


static void RunAllTests(void){
    RUN_TEST_GROUP(test_1553);
    RUN_TEST_GROUP(test_analog);
    RUN_TEST_GROUP(test_arinc429);
    RUN_TEST_GROUP(test_can);
    RUN_TEST_GROUP(test_discrete);
}

int main(int argc, const char * argv[]){
    return UnityMain(argc, argv, RunAllTests);
}
