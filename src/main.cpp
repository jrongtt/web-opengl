#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    // INITIALIZATION AND HINTS
    glfwInit(); // initialize glfw
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); // version 3.3
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW,OPENGL_CORE_PROFILE);


    // CREATION OF WINDOW AND CONTEXT OBJECT
    GLFWwindow* window = glfwCreateWindow(800, 600, "test", NULL, NULL);
    if (window == NULL) 
    {
        std::cout << "failed to create glfw window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfw MakeContextCurrent(window);

    // INITALIZE GLAD
    if (!gloadLoadGLLoader(GLADloadproc)glfwGetProcAddress)
    {
        std::cout << "Failed to initalize GLAD" << std::endl;
        return -1;
    }

    return 0;
}