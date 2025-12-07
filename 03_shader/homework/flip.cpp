#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "MainWindow.h"

float vertices[] = {
    // positions         // colors
    0.0f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f,   // top
    -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, // bottom left
    0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f   // bottom right
};

int main()
{
    MainWindow window(800, 600, "LearnOpenGL");
    window.addTraiangle(vertices, POSITION_COLOR, "D:\\Code\\Cpp\\OpenGL\\03_shader\\shader\\move_shader.vs", "D:\\Code\\Cpp\\OpenGL\\03_shader\\shader\\my_shader.fs");
    return window.run();
}
