@interface CCScaledRotationAndTranslationClampingConstraint : CCTransformConstraint {
    void /* unknown type, empty encoding */ _maxTranslation;
    void /* unknown type, empty encoding */ _maxEulerAnglesInRadians;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
