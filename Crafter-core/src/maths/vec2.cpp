#include "vec2.h"

namespace crafter {
	namespace maths {

		vec2::vec2() {
			x = 0.0f;
			y = 0.0f;
		}

		vec2::vec2(const float& x, const float& y) {
			this->x = x;
			this->y = y;
		}

		vec2& vec2::add(const vec2& other) {
			x += other.x;
			y += other.y;

			return *this;
		}

		vec2& vec2::subtract(const vec2& other) {
			x -= other.x;
			y -= other.y;

			return *this;
		}

		vec2& vec2::multiply(const vec2& other) {
			x *= other.x;
			y *= other.y;

			return *this;
		}

		vec2& vec2::divide(const vec2& other) {
			x /= other.x;
			y /= other.y;

			return *this;
		}

		std::ostream& operator<<(std::ostream& stream, const vec2& vector) {
			stream << "vec2: (" << vector.x << ',' << vector.y << ')';
			return stream;
		}

		vec2 operator+(vec2 left, const vec2& right) {
			//Will change value of left
			//return vec2(left.x + right.x, left.y + right.y);
			return left.add(right);
		}

		vec2 operator-(vec2 left, const vec2& right) {
			return left.subtract(right);
		}

		vec2 operator*(vec2 left, const vec2& right) {
			return left.multiply(right);
		}

		vec2 operator/(vec2 left, const vec2& right) {
			return left.divide(right);
		}

		vec2& vec2::operator+=(const vec2& other) {

			return add(other);
		}

		vec2& vec2::operator-=(const vec2& other) {
			return subtract(other);
		}

		vec2& vec2::operator*=(const vec2& other) {
			return multiply(other);
		}

		vec2& vec2::operator/=(const vec2& other) {
			return divide(other);
		}

		vec2& vec2::operator++(int) {
			return add(vec2(1.0f, 1.0f));
		}

		bool vec2::operator==(const vec2& other) {
			return x == other.x && y == other.y;
		}

		bool vec2::operator!=(const vec2& other) {
			return !(*this == other);
		}




	}
}