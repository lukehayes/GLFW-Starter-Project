#ifndef L_SHADER_H 
#define L_SHADER_H 

typedef struct Shader_ Shader;

/**
 * Create a shader object in memory, attach function pointers to it etc.
 */
Shader* CreateShader();

/**
 * Deletes the shader from memory
 *
 * @param Shader* shader
 */
void DestroyShader(Shader* shader);


#endif
