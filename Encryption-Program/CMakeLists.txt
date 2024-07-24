# CMakeList.txt : CMake project for Encryption-Program, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Encryption-Program "Encryption-Program.cpp" "Encryption-Program.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Encryption-Program PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
