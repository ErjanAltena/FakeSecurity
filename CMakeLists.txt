project("Secure or not secure, thats the question")

set(CMAKE_C_FLAGS "-g -Wall -Werror")
add_executable(secure_app secure_app.c)

add_library(unsecure_it SHARED unsecure_it.c)
