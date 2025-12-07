#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

struct Triangle
{
    unsigned int VAO;
    unsigned int shaderProgram;
};

enum Mode
{
    ONLY_POSITION,
    POSITION_COLOR
};

class MainWindow
{
private:
    bool Init();
    unsigned int createShaderProgram(const char *vertexPath, const char *fragmentPath);
    GLFWwindow *m_window;

    std::vector<Triangle> m_triangles;

public:
    MainWindow(int width, int height, const char *title);
    ~MainWindow();

    int run();
    void addTraiangle(float *vertices, Mode mode, const char *vertexShaderSource, const char *fragmentShaderSource);
};
