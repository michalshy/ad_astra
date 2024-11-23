add_library(ad_astra_lib
    Globals.hpp 
    System/Logic/Timer.hpp
    System/Logic/Timer.cpp
    Graphic/Interactive/Button.cpp
    Graphic/Interactive/Button.hpp
    Common/Font/Font.hpp
    Common/Font/Font.hpp
)

add_executable(ad_astra_prog 
    main.cpp     
)

target_link_libraries(ad_astra_lib 
    sfml-graphics
    sfml-system
    sfml-main
    sfml-audio
    sfml-network
    sfml-window
)

target_link_libraries(ad_astra_prog
ad_astra_lib
)