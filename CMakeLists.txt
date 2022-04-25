# CMakeList.txt: проект CMake для Task_32_5_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set (CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

project ("Task_32_5_1")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task_32_5_1 "Task_32_5_1.cpp" "Task_32_5_1.h")

target_link_libraries(Task_32_5_1 PRIVATE nlohmann_json::nlohmann_json)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
