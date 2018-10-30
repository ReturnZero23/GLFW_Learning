
link_libraries(glfw)

include_directories(${glfw_INCLUDE_DIRS} "${GLFW_SOURCE_DIR}/deps")

if (MATH_LIBRARY)
    link_libraries("${MATH_LIBRARY}")
endif()

if (GLFW_USE_OSMESA)
    add_definitions(-DUSE_NATIVE_OSMESA)
endif()

set(GLAD "${GLFW_SOURCE_DIR}/deps/glad/glad.h"
         "${GLFW_SOURCE_DIR}/deps/glad.c")

add_executable(simple WIN32 MACOSX_BUNDLE simple.c ${ICON} ${GLAD})

set(WINDOWS_BINARIES boing gears heightmap particles sharing simple splitview wave)
set(CONSOLE_BINARIES offscreen)

if (APPLE)
    set_target_properties(simple PROPERTIES MACOSX_BUNDLE_BUNDLE_NAME "Simple")
endif()

