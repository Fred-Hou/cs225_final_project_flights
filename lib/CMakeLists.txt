# Path definitions.
set(lib_dir ${CMAKE_CURRENT_SOURCE_DIR})

# Add lodepng library.
set(lodepng_dir ${lib_dir}/lodepng)
file(GLOB_RECURSE lodepng_sources CONFIGURE_DEPENDS ${lodepng_dir}/*.h ${lodepng_dir}/*.cpp)
add_library(lodepng ${lodepng_sources})
set_target_properties(lodepng PROPERTIES LINKER_LANGUAGE CXX)

# Add cs225 library.
set(cs225_dir ${lib_dir}/cs225)
file(GLOB_RECURSE cs225_sources CONFIGURE_DEPENDS ${cs225_dir}/*.cpp)
add_library(cs225 ${cs225_sources})
target_include_directories(cs225 PRIVATE ${lib_dir})
target_link_libraries(cs225 PRIVATE lodepng)

# Add utils library.
set(utils_dir ${lib_dir}/utils)
file(GLOB_RECURSE utils_sources CONFIGURE_DEPENDS ${utils_dir}/*.cpp)
add_library(utils ${utils_sources})
target_include_directories(utils PRIVATE ${lib_dir})
<<<<<<< HEAD
target_link_libraries(utils PRIVATE cs225 lodepng)

# Add heap library.
set(heap_dir ${lib_dir}/heap)
file(GLOB_RECURSE heap_sources CONFIGURE_DEPENDS ${heap_dir}/*.cpp)
add_library(heap ${heap_sources})
target_include_directories(heap PRIVATE ${lib_dir})
target_link_libraries(heap PRIVATE utils cs225 lodepng)

# Add animation library.
set(animation_dir ${lib_dir}/animation)
file(GLOB_RECURSE animation_sources CONFIGURE_DEPENDS ${animation_dir}/*.cpp)
add_library(animation ${animation_sources})
target_include_directories(animation PRIVATE ${lib_dir})
target_link_libraries(animation PRIVATE heap utils cs225 lodepng)
=======
target_link_libraries(utils PRIVATE lodepng)
>>>>>>> main


# Add overall libs library.
add_library(libs INTERFACE)
target_include_directories(libs INTERFACE ${lib_dir})
<<<<<<< HEAD
target_link_libraries(libs INTERFACE cs225 utils heap animation)
=======
target_link_libraries(libs INTERFACE cs225)
>>>>>>> main
