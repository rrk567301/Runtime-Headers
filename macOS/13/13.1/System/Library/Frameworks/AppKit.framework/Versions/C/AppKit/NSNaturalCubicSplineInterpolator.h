@interface NSNaturalCubicSplineInterpolator : NSObject {
    struct { double x0; double x1; } *_knots;
    long long _length;
    double *_Hi;
    double *_Bi;
    double *_Ci;
    double *_Di;
    double *_Zi;
}

- (void)dealloc;
- (id)initWithKnots:(struct { double x0; double x1; } *)a0 length:(long long)a1;
- (void)_calculateZiVector;
- (double)_intervalLength:(long long)a0;
- (double)_intervalAt:(double)a0;
- (double)valueAt:(double)a0;

@end
