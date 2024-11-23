#include <gtest/gtest.h>
#include "../src/System/Logic/Timer.hpp"

class TimerTest: public testing::Test {
protected:
    TimerTest() {

    }

    Timer t = Timer();
};