#include "Shader.h"
#include "System.h"

int main(void)
{
    System* system = CreateSystem();

    Shader* shader = CreateShader();

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(system->window))    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(system->window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    DestroyShader(shader);
    DestroySystem(system);

    glfwTerminate();
    return 0;
}
