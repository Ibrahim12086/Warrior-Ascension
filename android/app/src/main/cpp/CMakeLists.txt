cmake_minimum_required(VERSION 3.18)
project(WarriorAscensionNative)

# الرجوع 5 مستويات للخلف للوصول لملف CoreLogic.cpp
add_library(warrior SHARED
    ../../../../../Source/CoreLogic.cpp
)

# إضافة مجلد Source للمكتبات البرمجية
target_include_directories(warrior PRIVATE ../../../../../Source)

find_library(log-lib log)

target_link_libraries(warrior
    ${log-lib}
)
