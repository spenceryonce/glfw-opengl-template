#include <glew.h>  // Include GLEW for easy OpenGL function loading
#include <glfw3.h>  // Include GLFW for window handling

int main() {
    // Initialize GLFW
    glfwInit();

    // Set OpenGL version and profile (core in this case)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); 
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    GLFWwindow* window = glfwCreateWindow(800, 600, "Hello OpenGL", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    glewExperimental = true;
    if (glewInit() != GLEW_OK) {
        glfwTerminate();
        return -1;
    }

    // Render loop
    while (!glfwWindowShouldClose(window)) {
        // Clear the screen to a color
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f); 
        glClear(GL_COLOR_BUFFER_BIT);

        // show what we've drawn
        glfwSwapBuffers(window); 

        // Process events (input, window resize, etc.)
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
