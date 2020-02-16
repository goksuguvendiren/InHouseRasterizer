#include "rasterizer.hpp"

glm::vec4 vertex_shader(const pnr::vertex_shader_payload& payload)
{
    // calculate vertex position (homogeneous), and return it.
}

glm::vec3 fragment_shader(const pnr::fragment_shader_payload& payload)
{
    // calculate color, and return color of the pixel.
}

int main()
{
    pnr::Rasterizer r(500, 500);

    r.set_vertex_shader(vertex_shader);
    r.set_fragment_shader(fragment_shader);

    r.draw();

    cv::Mat image(height, width, CV_8UC3, r.get_frame_buffer.data());
    cv::imwrite("image.png", image);
}