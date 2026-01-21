cmake_minimum_required(VERSION 3.18)
project(WarriorAscensionNative)

# المسار إلى مصدر C++ (من هذا الملف إلى جذر المشروع)
# (android/app/src/main/cpp) -> ../../../../GameEngine/CoreLogic.cpp
add_library(warrior SHARED
    ../../../../GameEngine/CoreLogic.cpp
)

# لو عندك include headers في GameEngine folder
target_include_directories(warrior PRIVATE ../../../../GameEngine)

find_library(log-lib log)

target_link_libraries(warrior
    ${log-lib}
)
