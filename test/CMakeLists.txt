add_executable(ad_astra_tests
    main.cpp
    TimerTest.hpp
)
target_link_libraries(ad_astra_tests
    gtest
    gmock
    GTest::gtest_main
    ad_astra_lib
)

include(GoogleTest)
gtest_discover_tests(ad_astra_tests)