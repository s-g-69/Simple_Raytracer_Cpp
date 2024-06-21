// Code below provides the implementation of a simple raytracer.

// In the below code we have used 3 spheres - left , center , and right;

// The sphere on the left is a hollow sphere with  a sphere of some thickness with another sphere of air inside it.

// The sphere on the right is a solid fuzzed metal sphere.

// The sphere on the center is a Diffused(matte) Lambertian sphere.

// The image is gamma-corrected.

#include "rtweekend.h"

#include "camera.h"

#include "hittable.h"

#include "hittable_list.h"

#include "sphere.h"

int main()

{

    hittable_list world;

    auto material_ground = make_shared<lambertian>(color(0.8, 0.8, 0.0));

    auto material_center = make_shared<lambertian>(color(0.1, 0.2, 0.5));

    // Air bubble.

    // auto material_left   = make_shared<dielectric>(1.00 / 1.33);

    // A hollow glass sphere.

    auto material_left = make_shared<dielectric>(1.50);

    auto material_bubble = make_shared<dielectric>(1.00 / 1.50);

    auto material_right = make_shared<metal>(color(0.8, 0.6, 0.2), 1.0);

    world.add(make_shared<sphere>(point3(0.0, -100.5, -1.0), 100.0, material_ground));

    world.add(make_shared<sphere>(point3(0.0, 0.0, -1.2), 0.5, material_center));

    world.add(make_shared<sphere>(point3(-1.0, 0.0, -1.0), 0.5, material_left));

    // Air Bubble

    world.add(make_shared<sphere>(point3(-1.0, 0.0, -1.0), 0.4, material_bubble));

    world.add(make_shared<sphere>(point3(1.0, 0.0, -1.0), 0.5, material_right));

    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;

    cam.image_width = 400;

    cam.samples_per_pixel = 100;

    cam.max_depth = 50;

    // Changing field of view.

    cam.vfov = 20;

    cam.lookfrom = point3(-2, 2, 1);

    cam.lookat = point3(0, 0, -1);

    cam.vup = vec3(0, 1, 0);

    // Defocusing blur -> Using a larger aperture:

    cam.defocus_angle = 10.0;

    cam.focus_dist = 3.4;

    cam.render(world);
}