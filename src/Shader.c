#include "Shader.h"
#include <stdlib.h>

typedef struct Shader_
{

} Shader;

Shader* CreateShader()
{
    Shader* shader = malloc(sizeof(Shader));

    // Add function pointers here

    return shader;
}

void DestroyShader(Shader* shader)
{
    free(shader);
}
