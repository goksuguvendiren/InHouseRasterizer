#pragma once

#include <functional>
#include <glm/vec3.hpp>

namespace pnr
{
class Rasterizer
{
public:
    Rasterizer(int w, int h)
    {
        framebuffer.resize(w * h);
    }

    void draw();

    void set_vertex_shader(std::function<glm::vec4(const pnr::vertex_shader_payload&)> vs)
    {
        vertex_shader = vs;
    }

private:
    void rasterize_triangle();
    std::vector<glm::vec3> framebuffer;

    std::function<glm::vec4(const pnr::vertex_shader_payload&)> vertex_shader;
    std::function<glm::vec4(const pnr::fragment_shader_payload&)> fragment_shader;

    glm::mat4 view_matrix;
    glm::mat4 proj_matrix;
}
} // namespace pnr