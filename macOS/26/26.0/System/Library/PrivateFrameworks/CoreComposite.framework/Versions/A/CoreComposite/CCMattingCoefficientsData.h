@protocol MTLTexture;

@interface CCMattingCoefficientsData : CCData {
    id<MTLTexture> _coefficients;
    id<MTLTexture> _tanAnglesToCoefficients;
    struct { void /* unknown type, empty encoding */ columns[4]; } _displayToCoefficients;
    void /* unknown type, empty encoding */ _bias;
    void /* unknown type, empty encoding */ _scale;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
