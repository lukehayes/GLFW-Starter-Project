#include "System.h"
#include <stdio.h>
#include <stdlib.h>

void error_callback( int error, const char* description )
{
    printf("%i - %s ", error, description);
}

int Initialize(System* system)
{
    /* Initialize the library */
    if (!glfwInit())
    {
        glfwSetErrorCallback(error_callback);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    /* Create a windowed mode window and its OpenGL context */
    system->window = glfwCreateWindow(640, 480, "GLFW", NULL, NULL);
    if (!system->window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(system->window);
    gladLoadGL();

}

System* CreateSystem()
{
    System* system = malloc(sizeof(System));

    Initialize(system);

    return system;
}

void DestroySystem(System* system)
{
    free(system);
}
