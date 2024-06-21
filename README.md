# Simple_Raytracer_Cpp
This repository contains my implementation of a basic ray tracer, following the [Ray Tracing in One Weekend][web1] series by Peter Shirley. The project is written in C++ and demonstrates fundamental concepts of ray tracing, including rendering, shading, and handling various materials.


### Features
  - Basic Ray Tracing: Implementation of ray-object intersections, camera setup, and rendering a simple scene.
  - Diffuse Shading: Simple diffuse lighting to simulate the interaction of light with rough surfaces.
  - Materials: Support for different material types including lambertian (diffuse), metal, and dielectric (glass).
  - Antialiasing: Technique to smooth out the edges of objects and improve image quality.
  - Random Scene Generation: Ability to generate random scenes with spheres to test the ray tracer.


Source Code
-----------
### Intent
This repository is not meant to act as its own tutorial. The source is provided so you can compare
your work when progressing through the book. We strongly recommend reading and following along with
the book to understand the source. Ideally, you'll be developing your own implementation as you go,
in order to deeply understand how a raytracer works.

### Downloading The Source Code
To clone or download the source code, see the green "Clone or
download" button in the upper right of the project home page.

### Programming Language
This book is written in C++, and uses some modern features of C++11. The language and features were
chosen to be broadly understood by the largest collection of programmers. It is not meant to
represent ideal (or optimized) C++ code.

Building and Running
---------------------
Copies of the source are provided for you to check your work and compare against. If you wish to
run the provided source code run the following commands:

### In Terminal write: 

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/Simple_Raytracer_Cpp.git

2. **Navigate to the project directory**:
   ```bash
   cd example_directory

3. **Complie the C++ code in terminal using the following code**:
   ```bash
   g++ -o a main.cc
   ./a > out.ppm

The generated PPM file can be viewed directly as a regular computer image, if your operating system
supports this image type. If your system doesn't handle PPM files, then you should be able to find
PPM file viewers online. We like [ImageMagick][]. Moreover, you can also convert the generated ppm
file to .jpg / .png file formats using any resouce online.


## Contributing

We welcome contributions from the community! To contribute:

1. **Fork the repository**.
2. **Create a new branch**:
   ```bash
   git checkout -b feature/your-feature-name
3. **Make your changes and commit them**:
   ```bash
   git commit -m "Add some feature"
4. **Push to the branch**:
   ```bash
   git push origin feature/your-feature-name
5. **Open a pull request to the main branch.**.



## CONTACT
For any inquiries or support, please contact us at sahil852145693@gmail.com




[ImageMagick]:     https://imagemagick.org/
[web1]:            https://raytracing.github.io/books/RayTracingInOneWeekend.html
