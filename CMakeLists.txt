add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
# Just if you have messages generating in this package
add_dependencies(listener beginner_tutorials_generate_messages_cpp)
