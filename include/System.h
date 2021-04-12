#ifndef AXC_SYSTEM_H
#define AXC_SYSTEM_H

#include "glad/glad.h"
#include <GLFW/glfw3.h>

typedef struct System_ {
    GLFWwindow* window;
} System;

void error_callback( int error, const char* description );

int Initialize(System* system);

System* CreateSystem();

void DestroySystem(System* system);

#endif
