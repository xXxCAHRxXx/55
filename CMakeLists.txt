
project(Evolution)
add_executable(${PROJECT_NAME} main.cpp world.cpp)

set(SFML_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/SFML-2.5.1)
set(SFML_DIR ${SFML_ROOT_DIR}/lib/cmake/SFML)
find_package(SFML 2.5.1 COMPONENTS system window graphics audio REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-system sfml-window sfml-network sfml-graphics sfml-audio)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/$<0:>)
