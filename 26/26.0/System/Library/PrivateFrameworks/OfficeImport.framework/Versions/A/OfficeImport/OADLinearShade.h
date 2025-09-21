@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (BOOL)scaled;
- (void)setScaled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)angle;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setAngle:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;

@end
