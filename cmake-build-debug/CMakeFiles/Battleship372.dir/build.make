# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maran\CLionProjects\Battleship372

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Battleship372.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Battleship372.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Battleship372.dir\flags.make

CMakeFiles\Battleship372.dir\main.cpp.obj: CMakeFiles\Battleship372.dir\flags.make
CMakeFiles\Battleship372.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Battleship372.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Battleship372.dir\main.cpp.obj /FdCMakeFiles\Battleship372.dir\ /FS -c C:\Users\maran\CLionProjects\Battleship372\main.cpp
<<

CMakeFiles\Battleship372.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship372.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Battleship372.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maran\CLionProjects\Battleship372\main.cpp
<<

CMakeFiles\Battleship372.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship372.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Battleship372.dir\main.cpp.s /c C:\Users\maran\CLionProjects\Battleship372\main.cpp
<<

CMakeFiles\Battleship372.dir\Model\Board.cpp.obj: CMakeFiles\Battleship372.dir\flags.make
CMakeFiles\Battleship372.dir\Model\Board.cpp.obj: ..\Model\Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Battleship372.dir/Model/Board.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Battleship372.dir\Model\Board.cpp.obj /FdCMakeFiles\Battleship372.dir\ /FS -c C:\Users\maran\CLionProjects\Battleship372\Model\Board.cpp
<<

CMakeFiles\Battleship372.dir\Model\Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship372.dir/Model/Board.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Battleship372.dir\Model\Board.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maran\CLionProjects\Battleship372\Model\Board.cpp
<<

CMakeFiles\Battleship372.dir\Model\Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship372.dir/Model/Board.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Battleship372.dir\Model\Board.cpp.s /c C:\Users\maran\CLionProjects\Battleship372\Model\Board.cpp
<<

CMakeFiles\Battleship372.dir\Game.cpp.obj: CMakeFiles\Battleship372.dir\flags.make
CMakeFiles\Battleship372.dir\Game.cpp.obj: ..\Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Battleship372.dir/Game.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Battleship372.dir\Game.cpp.obj /FdCMakeFiles\Battleship372.dir\ /FS -c C:\Users\maran\CLionProjects\Battleship372\Game.cpp
<<

CMakeFiles\Battleship372.dir\Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship372.dir/Game.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Battleship372.dir\Game.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maran\CLionProjects\Battleship372\Game.cpp
<<

CMakeFiles\Battleship372.dir\Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship372.dir/Game.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Battleship372.dir\Game.cpp.s /c C:\Users\maran\CLionProjects\Battleship372\Game.cpp
<<

CMakeFiles\Battleship372.dir\Model\AI.cpp.obj: CMakeFiles\Battleship372.dir\flags.make
CMakeFiles\Battleship372.dir\Model\AI.cpp.obj: ..\Model\AI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Battleship372.dir/Model/AI.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Battleship372.dir\Model\AI.cpp.obj /FdCMakeFiles\Battleship372.dir\ /FS -c C:\Users\maran\CLionProjects\Battleship372\Model\AI.cpp
<<

CMakeFiles\Battleship372.dir\Model\AI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship372.dir/Model/AI.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Battleship372.dir\Model\AI.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maran\CLionProjects\Battleship372\Model\AI.cpp
<<

CMakeFiles\Battleship372.dir\Model\AI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship372.dir/Model/AI.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Battleship372.dir\Model\AI.cpp.s /c C:\Users\maran\CLionProjects\Battleship372\Model\AI.cpp
<<

CMakeFiles\Battleship372.dir\View\UI.cpp.obj: CMakeFiles\Battleship372.dir\flags.make
CMakeFiles\Battleship372.dir\View\UI.cpp.obj: ..\View\UI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Battleship372.dir/View/UI.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Battleship372.dir\View\UI.cpp.obj /FdCMakeFiles\Battleship372.dir\ /FS -c C:\Users\maran\CLionProjects\Battleship372\View\UI.cpp
<<

CMakeFiles\Battleship372.dir\View\UI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship372.dir/View/UI.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Battleship372.dir\View\UI.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maran\CLionProjects\Battleship372\View\UI.cpp
<<

CMakeFiles\Battleship372.dir\View\UI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship372.dir/View/UI.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Battleship372.dir\View\UI.cpp.s /c C:\Users\maran\CLionProjects\Battleship372\View\UI.cpp
<<

# Object files for target Battleship372
Battleship372_OBJECTS = \
"CMakeFiles\Battleship372.dir\main.cpp.obj" \
"CMakeFiles\Battleship372.dir\Model\Board.cpp.obj" \
"CMakeFiles\Battleship372.dir\Game.cpp.obj" \
"CMakeFiles\Battleship372.dir\Model\AI.cpp.obj" \
"CMakeFiles\Battleship372.dir\View\UI.cpp.obj"

# External object files for target Battleship372
Battleship372_EXTERNAL_OBJECTS =

Battleship372.exe: CMakeFiles\Battleship372.dir\main.cpp.obj
Battleship372.exe: CMakeFiles\Battleship372.dir\Model\Board.cpp.obj
Battleship372.exe: CMakeFiles\Battleship372.dir\Game.cpp.obj
Battleship372.exe: CMakeFiles\Battleship372.dir\Model\AI.cpp.obj
Battleship372.exe: CMakeFiles\Battleship372.dir\View\UI.cpp.obj
Battleship372.exe: CMakeFiles\Battleship372.dir\build.make
Battleship372.exe: CMakeFiles\Battleship372.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Battleship372.exe"
	"C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Battleship372.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Battleship372.dir\objects1.rsp @<<
 /out:Battleship372.exe /implib:Battleship372.lib /pdb:C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\Battleship372.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Battleship372.dir\build: Battleship372.exe

.PHONY : CMakeFiles\Battleship372.dir\build

CMakeFiles\Battleship372.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Battleship372.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Battleship372.dir\clean

CMakeFiles\Battleship372.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\maran\CLionProjects\Battleship372 C:\Users\maran\CLionProjects\Battleship372 C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug C:\Users\maran\CLionProjects\Battleship372\cmake-build-debug\CMakeFiles\Battleship372.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Battleship372.dir\depend

