@interface CCScaledRotationAndTranslationClampingConstraint : CCTransformConstraint {
    void /* unknown type, empty encoding */ _maxTranslation;
    void /* unknown type, empty encoding */ _maxEulerAnglesInRadians;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
