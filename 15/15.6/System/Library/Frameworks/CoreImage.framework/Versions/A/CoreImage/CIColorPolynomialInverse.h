@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (char)_isInvertible;
- (id)_kernelRGB;

@end
