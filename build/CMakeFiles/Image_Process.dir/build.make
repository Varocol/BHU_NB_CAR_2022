# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Varocol/BHU_NB_CAR_2022

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Varocol/BHU_NB_CAR_2022/build

# Include any dependencies generated for this target.
include CMakeFiles/Image_Process.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Image_Process.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Image_Process.dir/flags.make

CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o: CMakeFiles/Image_Process.dir/flags.make
CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o: ../lib/Image_Process/Image_Process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/Varocol/BHU_NB_CAR_2022/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o -c /home/Varocol/BHU_NB_CAR_2022/lib/Image_Process/Image_Process.cpp

CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Varocol/BHU_NB_CAR_2022/lib/Image_Process/Image_Process.cpp > CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.i

CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Varocol/BHU_NB_CAR_2022/lib/Image_Process/Image_Process.cpp -o CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.s

# Object files for target Image_Process
Image_Process_OBJECTS = \
"CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o"

# External object files for target Image_Process
Image_Process_EXTERNAL_OBJECTS =

libImage_Process.a: CMakeFiles/Image_Process.dir/lib/Image_Process/Image_Process.cpp.o
libImage_Process.a: CMakeFiles/Image_Process.dir/build.make
libImage_Process.a: CMakeFiles/Image_Process.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/Varocol/BHU_NB_CAR_2022/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libImage_Process.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Image_Process.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Image_Process.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Image_Process.dir/build: libImage_Process.a

.PHONY : CMakeFiles/Image_Process.dir/build

CMakeFiles/Image_Process.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Image_Process.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Image_Process.dir/clean

CMakeFiles/Image_Process.dir/depend:
	cd /home/Varocol/BHU_NB_CAR_2022/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Varocol/BHU_NB_CAR_2022 /home/Varocol/BHU_NB_CAR_2022 /home/Varocol/BHU_NB_CAR_2022/build /home/Varocol/BHU_NB_CAR_2022/build /home/Varocol/BHU_NB_CAR_2022/build/CMakeFiles/Image_Process.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Image_Process.dir/depend
