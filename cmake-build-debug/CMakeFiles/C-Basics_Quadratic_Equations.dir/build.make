# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/heict/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/heict/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/heict/C-Basics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/heict/C-Basics/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C-Basics_Quadratic_Equations.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C-Basics_Quadratic_Equations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C-Basics_Quadratic_Equations.dir/flags.make

CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o: CMakeFiles/C-Basics_Quadratic_Equations.dir/flags.make
CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o: ../Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/heict/C-Basics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o   -c /cygdrive/c/Users/heict/C-Basics/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c

CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/heict/C-Basics/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c > CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.i

CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/heict/C-Basics/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c -o CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.s

# Object files for target C-Basics_Quadratic_Equations
C__Basics_Quadratic_Equations_OBJECTS = \
"CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o"

# External object files for target C-Basics_Quadratic_Equations
C__Basics_Quadratic_Equations_EXTERNAL_OBJECTS =

C-Basics_Quadratic_Equations.exe: CMakeFiles/C-Basics_Quadratic_Equations.dir/Mathematical_Applications/Quadratic_Equations/Quadratic_Equations.c.o
C-Basics_Quadratic_Equations.exe: CMakeFiles/C-Basics_Quadratic_Equations.dir/build.make
C-Basics_Quadratic_Equations.exe: CMakeFiles/C-Basics_Quadratic_Equations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/heict/C-Basics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C-Basics_Quadratic_Equations.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C-Basics_Quadratic_Equations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C-Basics_Quadratic_Equations.dir/build: C-Basics_Quadratic_Equations.exe

.PHONY : CMakeFiles/C-Basics_Quadratic_Equations.dir/build

CMakeFiles/C-Basics_Quadratic_Equations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C-Basics_Quadratic_Equations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C-Basics_Quadratic_Equations.dir/clean

CMakeFiles/C-Basics_Quadratic_Equations.dir/depend:
	cd /cygdrive/c/Users/heict/C-Basics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/heict/C-Basics /cygdrive/c/Users/heict/C-Basics /cygdrive/c/Users/heict/C-Basics/cmake-build-debug /cygdrive/c/Users/heict/C-Basics/cmake-build-debug /cygdrive/c/Users/heict/C-Basics/cmake-build-debug/CMakeFiles/C-Basics_Quadratic_Equations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C-Basics_Quadratic_Equations.dir/depend
