# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio2.dir/flags.make

CMakeFiles/Ejercicio2.dir/main.cpp.obj: CMakeFiles/Ejercicio2.dir/flags.make
CMakeFiles/Ejercicio2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio2.dir\main.cpp.obj -c C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\main.cpp

CMakeFiles/Ejercicio2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\main.cpp > CMakeFiles\Ejercicio2.dir\main.cpp.i

CMakeFiles/Ejercicio2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\main.cpp -o CMakeFiles\Ejercicio2.dir\main.cpp.s

CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.obj: CMakeFiles/Ejercicio2.dir/flags.make
CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.obj: ../Ejercicio2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio2.dir\Ejercicio2.cpp.obj -c C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\Ejercicio2.cpp

CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\Ejercicio2.cpp > CMakeFiles\Ejercicio2.dir\Ejercicio2.cpp.i

CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\Ejercicio2.cpp -o CMakeFiles\Ejercicio2.dir\Ejercicio2.cpp.s

# Object files for target Ejercicio2
Ejercicio2_OBJECTS = \
"CMakeFiles/Ejercicio2.dir/main.cpp.obj" \
"CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.obj"

# External object files for target Ejercicio2
Ejercicio2_EXTERNAL_OBJECTS =

Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/main.cpp.obj
Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/Ejercicio2.cpp.obj
Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/build.make
Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/linklibs.rsp
Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/objects1.rsp
Ejercicio2.exe: CMakeFiles/Ejercicio2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Ejercicio2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio2.dir/build: Ejercicio2.exe

.PHONY : CMakeFiles/Ejercicio2.dir/build

CMakeFiles/Ejercicio2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio2.dir/clean

CMakeFiles/Ejercicio2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2 C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2 C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab06\Ejercicio2\cmake-build-debug\CMakeFiles\Ejercicio2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio2.dir/depend

