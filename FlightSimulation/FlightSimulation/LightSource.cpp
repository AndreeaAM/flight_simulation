#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
class LightSource {
public:
    glm::vec3 position;
    glm::vec3 color;
    float intensity;

    LightSource(const glm::vec3& pos, const glm::vec3& col, float inten)
        : position(pos), color(col), intensity(inten) {}

    void SetPosition(const glm::vec3& pos) {
        position = pos;
    }

    void SetColor(const glm::vec3& col) {
        color = col;
    }

    void SetIntensity(float inten) {
        intensity = inten;
    }

    // mai adaug functii modificare lumina
};
