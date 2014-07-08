	
#include <Shape.hpp>

class Sphere : public Shape
{
public:
	Sphere():
		Shape{{0}, "Sphere"},
		center_{0,0,0},
		radius_{1} {}

	Sphere(glm::vec3 const& center, double radius, ColorRGB const& color):
		Shape{{color}, "Sphere"},
		center_(center),
		radius_{fabs(radius)} {}

	Sphere(glm::vec3 const& center, double radius, ColorRGB const& color, string name):
		Shape{{color}, name},
		center_(center),
		radius_{fabs(radius)} {}

	~Sphere(){}


	void std::pair(bool, double) intersect(Ray const& r) const = 0;

private:
	glm::vec3 center_;
	double radius_;


}
