add_rules("mode.debug", "mode.release")

set_toolchains("msvc")

add_requires("glfw")
add_requires("glad")

includes("01_first_window")
includes("02_hello_triangle")
