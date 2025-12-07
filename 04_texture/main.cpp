#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "MainWindow.h"
#include "stb/stb_image.h"

float vertices[] = {
    // positions          // colors           // texture coords
    0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f,  // top right
    0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // bottom right
    -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f // bottom left
};

int main()
{
    MainWindow window(800, 600, "LearnOpenGL");
    window.addTriangle(vertices, POSITION_COLOR_TEXTURE, "D:\\Code\\Cpp\\OpenGL\\04_texture\\shader\\my_shader.vs", "D:\\Code\\Cpp\\OpenGL\\04_texture\\shader\\my_shader.fs", "D:\\Code\\Cpp\\OpenGL\\04_texture\\texture\\container.jpg");
    return window.run();
}
