project (watchexpr-context)

add_library(watchexpr-lib SHARED lib.cpp)
add_library(watchexpr-lib.1.2.3 SHARED lib2.cpp)

add_executable(watchexpr-exe main.cpp)
target_link_libraries(watchexpr-exe PRIVATE watchexpr-lib watchexpr-lib.1.2.3)