#version 330 core
layout (location=0)in vec3 aPos;
layout (location=1)in vec3 aColor;

out vec3 ourColor;
uniform float uAngle;

void main()
{
    float s = sin(uAngle);
    float c = cos(uAngle);
    float x = aPos.x * c - aPos.y * s;
    float y = aPos.x * s + aPos.y * c;
    gl_Position = vec4(x, y, aPos.z, 1.0);
    ourColor = vec3(aColor.x*abs(s),aColor.y*abs(c),aColor.z*abs(s*c));
}