@interface MPVector : NSObject {
    double _vector[4];
    long long _length;
}

+ (BOOL)supportsSecureCoding;
+ (id)vectorFromMCVector:(struct { unsigned char x0; float x1[4]; })a0;
+ (id)vectorFromString:(id)a0;
+ (id)vectorFromCIVector:(id)a0;
+ (id)vectorWithValues:(id)a0;
+ (id)vectorFromColor:(id)a0;
+ (id)vectorFromCGColor:(struct CGColor { } *)a0;
+ (id)scriptingVectorWithDescriptor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)string;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)values;
- (BOOL)isEqualTo:(id)a0;
- (struct CGColor { } *)CGColor;
- (void)setValues:(id)a0;
- (id)color;
- (double)valueAtIndex:(long long)a0;
- (struct { unsigned char x0; float x1[4]; })vector;
- (void)setVector:(struct { unsigned char x0; float x1[4]; })a0;
- (id)CIColorString;
- (id)CIVector;
- (id)scriptingVectorDescriptor;

@end
