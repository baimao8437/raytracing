#ifndef __RAY_MATH_TOOLKIT_H
#define __RAY_MATH_TOOLKIT_H

#include <math.h>
#include <stdio.h>
#include <assert.h>

#define length(v) (sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]))
#define add_vector(a, b, out) (out[0] = a[0] + b[0], out[1] = a[1] + b[1], out[2] = a[2] + b[2])
#define subtract_vector(a, b, out) (out[0] = a[0] - b[0], out[1] = a[1] - b[1], out[2] = a[2] - b[2])
#define multiply_vectors(a, b, out) (out[0] = a[0] * b[0], out[1] = a[1] * b[1], out[2] = a[2] * b[2])
#define multiply_vector(a, b, out) (out[0] = a[0] * (b), out[1] = a[1] * (b), out[2] = a[2] * (b))
#define cross_product(v1, v2, out) (out[0] = v1[1] * v2[2] - v1[2] * v2[1], out[1] = v1[2] * v2[0] - v1[0] * v2[2], out[2] = v1[0] * v2[1] - v1[1] * v2[0])
#define dot_product(v1, v2) (v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2])

static inline __attribute__((always_inline))
void normalize(double *v)
{
    double d = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    assert(d != 0.0 && "Error calculating normal");

    v[0] /= d;
    v[1] /= d;
    v[2] /= d;
}

#endif
