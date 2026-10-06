#include <CUnit/CUnit.h> /* CUnit can be installed on ubuntu/debian with */
#include <CUnit/Basic.h> /* sudo apt install libcunit1 libcunit1-dev -y */
/* include custom library/libraries with api being tested */

/*
This is just a generic template
For advanced details view the CUnit manpage
*/

/* Initialize Function For Suites */
int
init(void)
{
    int exit_code = -1;

    /* Do initialization */

    exit_code = 0;
    return exit_code;
}

/* Cleanup Function For Suite */
int
cleanup(void)
{
    int exit_code = -1;

    /* Do Cleanup */

    exit_code = 0;
    return exit_code;
}

/* Create test case. A test case function needs to be prefixed with test_ and return void */
void
test_example_0(void)
{
    /*
    Parameter 1 = actual value
    Parameter 2 = expected value
    CU_ASSERT_EQUAL -> Basic Equal Check
    CU_ASSERT_NOT_EQUAL -> Basic Not Equal Check
    CU_ASSERT_EQUAL_FATAL -> If Equal Check Fails End All Tests
    CU_ASSERT_NOT_EQUAL_FATAL -> If Not Equal Check Fails End All Tests

    Same checks as above but for pointer values
    CU_ASSERT_PTR_EQUAL
    CU_ASSERT_PTR_NOT_EQUAL
    CU_ASSERT_PTR_NULL
    CU_ASSERT_PTR_NOT_NULL

    There are many more assertions available however the
    above are generally enough for wide code coverage
    */
}

int
main(void)
{
    /* Initialize the CUnit registry for Test suites*/
    CU_ErrorCode registry_error_code = CU_initialize_registry();
    if (CUE_SUCCESS != registry_error_code)
    {
        /* Exit and get CU error code */
        goto EXIT;
    }

    /* Add a test suite to the registry */
    CU_pSuite suite_0 = CU_add_suite("Suite Name", init, cleanup);
    if (NULL == suite_0)
    {
        goto CLEANUP;
    }

    /* Add tests to the suite */
    CU_pTest test_0 = CU_add_test(suite_0, "Description", test_example_0);
    if (NULL == test_0)
    {
        goto CLEANUP;
    }

    /* Enable verbosity to get detailed output */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();

CLEANUP:
    /* Destroy the registry and exit */
    CU_cleanup_registry();
EXIT:
    return CU_get_error();
}