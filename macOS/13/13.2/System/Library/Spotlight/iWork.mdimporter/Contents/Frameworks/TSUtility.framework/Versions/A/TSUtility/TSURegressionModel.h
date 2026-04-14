@interface TSURegressionModel : NSObject {
    BOOL mModelValid;
    int mErrorType;
}

- (int)errorType;
- (double)rSquared;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (double)estimateForX:(double *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superscriptRangeAtIndex:(int)a0;
- (BOOL)isModelValid;
- (int)numSuperscriptRanges;
- (double)coefficientAtIndex:(int)a0;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (int)regressionType;
- (int)numCoefficients;
- (id)equationString;
- (id)formattedStringWithCoefficient:(double)a0 locale:(id)a1;

@end
