@interface TSUMovingAverageRegressionModel : TSURegressionModel {
    int mNumTrendPoint;
    double *mTrendXValues;
    double *mTrendYValues;
}

- (void)dealloc;
- (double)rSquared;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)a0;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (int)numSuperscriptRanges;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superscriptRangeAtIndex:(int)a0;
- (id)equationString;
- (id)initWithMappings:(int)a0 xs:(id)a1 ys:(id)a2 numPeriod:(int)a3;
- (int)numTrendPoint;
- (double)trendXValueAtIndex:(int)a0;
- (double)trendYValueAtIndex:(int)a0;

@end
