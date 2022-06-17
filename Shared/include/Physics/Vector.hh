#pragma once

namespace shared::physics
{
    class Vector
    {
        float m_X = 0;
        float m_Y = 0;

    public:
        Vector(float, float);

        float X() const;
        float Y() const;

        void X(float);
        void Y(float);

        Vector operator+(const Vector &) const;
        Vector operator-(const Vector &) const;
        Vector operator*(float) const;
        Vector operator/(float) const;
        Vector &operator/=(float);
        Vector &operator*=(float);
        Vector &operator+=(const Vector &);
        Vector &operator-=(const Vector &);
        Vector &operator=(const Vector &);
    };
}
