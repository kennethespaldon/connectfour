cmake_minimum_required(VERSION 3.29)
project(connect4)

set(CMAKE_CXX_STANDARD 20)

add_executable(connect4 main.cpp
        Model.cpp
        Controller.cpp
        BoardView.cpp
        Slot.cpp
        SlotView.cpp
        ColumnView.cpp
        StartButton.h
        StartButton.cpp
        Information.h
        Information.cpp
        SplashScreen.h
        SplashScreen.cpp
)

target_link_libraries(connect4 sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)