#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "stb/stb_image.h"

struct Shape
{
    unsigned int VAO;
    unsigned int EBO;
    unsigned int shaderProgram;
    unsigned int texture;
};

enum Mode
{
    ONLY_POSITION,
    POSITION_COLOR,
    POSITION_COLOR_TEXTURE
};

class MainWindow
{
private:
    bool Init();

    GLFWwindow *m_window;
    std::vector<Shape> m_triangles;

public:
    MainWindow(int width, int height, const char *title);
    ~MainWindow();

    int run();
    unsigned int createShaderProgram(const char *vertexPath, const char *fragmentPath);
    unsigned int loadTexture(const char *texturePath);
    void addTriangle(float *vertices, Mode mode, const char *vertexShaderSource, const char *fragmentShaderSource);
    void addTriangle(float *vertices, Mode mode, const char *vertexShaderSource, const char *fragmentShaderSource, const char *texturePath);
    void addCustomShape(unsigned int VAO, unsigned int EBO, unsigned int shaderProgram) {};
};
