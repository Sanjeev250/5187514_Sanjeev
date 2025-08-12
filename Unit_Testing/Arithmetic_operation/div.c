#include "demo.h"

int div(int a, int b) {
    return b != 0 ? a / b : 0;  // avoid divide by zero
}
