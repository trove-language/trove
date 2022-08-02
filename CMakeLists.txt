# CMakeList.txt : CMake project for trove, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("trove")

# find_package(OpenGL REQUIRED)

# add_subdirectory("lib/glfw")
# add_subdirectory("lib/glm")
add_subdirectory("lib/spdlog")
# add_subdirectory("lib/pugixml")

include_directories(
	"src"
	# "lib/imgui/"
	"lib/spdlog/include/"
	# "lib/glfw/include"
	# "lib/glew-2.2.0/include"
	# "lib/stbimage"
	# "lib/fastnoise"
)


# file(GLOB IMGUI_SOURCES "lib/imgui/*.cpp") 
# add_library(IMGUI STATIC ${IMGUI_SOURCES} "lib/imgui/backends/imgui_impl_glfw.cpp" "lib/imgui/backends/imgui_impl_opengl3.cpp")

# add_library( GLEW_1130 STATIC "lib/glew-2.2.0/src/glew.c")
# target_link_libraries(GLEW_1130
	# ${OPENGL_LIBRARY}
	# ${EXTRA_LIBS}
# )

set(SAUCE 
	"src/main.cpp"
	"src/cmd.cpp"
	)
set(HEAD 
	"src/main.h"
	"src/cmd.h"
	)

set(ALL_LIBS spdlog::spdlog)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)

# Add source to this project's executable.
add_executable (trove ${SAUCE} ${HEAD})

target_link_libraries(trove ${ALL_LIBS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET trove PROPERTY CXX_STANDARD 20)
endif()
# TODO: Add tests and install targets if needed.
