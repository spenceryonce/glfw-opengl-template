# GLFW / GLEW / OpenGL Template for C++

I've spent too much time reconfiguring opengl with glfw and glew, so I made this template to save time. Feel free to use it as a starting point for your project. 

Contributions are welcome! If you have any suggestions or improvements, feel free to fork the project, make your changes, and submit a pull request. 

### Future Features
- [ ] Mac support (technically works, but Makefile needs updating to build for mac)
- [ ] Linux support (same as mac)

### Requirements

- [x] g++ (MinGW-w64)
- [x] OpenGL 4.6 (MinGW-w64)
- [x] GLFW 3.4.0 (Included with source files)
- [x] GLEW 2.1.0 (Included with source files)

## Project Structure

1. `include\` - External Header Files
2. `lib\` - External Library Files
3. `build\` - Build Output Files
4. `main.cpp` - Program Entry Point
5. `Makefile` - Build Script

## Build

1. Install [Make](https://www.gnu.org/software/make/)
2. Install [Git](https://git-scm.com/downloads)
3. Clone the repository
5. Open the project in Visual Studio Code
6. Open the terminal in Visual Studio Code
7. Run `make` to build the project
8. Run `make run` to run the project
9. Run `make clean` to clean the project


