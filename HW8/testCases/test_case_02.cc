#include "Bunch.h"
#include "test.h"

using namespace std;

int run_test_case(string &info) {
    Bunch b("simple");
    b -= Bunch("simple");

    EXPECT(b.empty())

    return 0;
}