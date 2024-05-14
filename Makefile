CC = g++
CFLAGS = -Wall -Wextra -pedantic -O2
BUILD_DIR = .\build

GLFW_INCLUDE = .\include\glfw
GLEW_INCLUDE = .\include\glew

GLFW_LIB = .\lib\glfw
GLEW_LIB = .\lib\glew

LINKER_FLAGS = -lglfw3 -lopengl32 -lglew32 -lgdi32 -luser32

# make build dir if not exist
$(shell mkdir $(BUILD_DIR) 2> nul)
$(shell mkdir $(BUILD_DIR)\x64 2> nul)

build: opengl

opengl: main.cpp
	$(CC) $(CFLAGS) -std=c++20 main.cpp -o $(BUILD_DIR)\x64\opengl.exe -I$(GLFW_INCLUDE) -I$(GLEW_INCLUDE) -L$(GLFW_LIB) -L$(GLEW_LIB) $(LINKER_FLAGS)

run: build
	$(BUILD_DIR)\x64\opengl.exe

clean:
	del $(BUILD_DIR)\x64\opengl.exe

