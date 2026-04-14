@interface MatrixUtils : NSObject

+ (void)print:(id)a0;
+ (id)transpose:(id)a0;
+ (id)invertedMatrix:(id)a0;
+ (id)gaussJordanInvert:(id)a0 lambda:(double)a1;
+ (id)matrixMultiply:(id)a0 B:(id)a1;
+ (id)solveAWithC:(id)a0 B:(id)a1;

- (id)init;

@end
