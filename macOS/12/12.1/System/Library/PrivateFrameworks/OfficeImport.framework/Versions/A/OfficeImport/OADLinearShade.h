@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)angle;
- (void)setAngle:(float)a0;
- (id)initWithDefaults;
- (void)setScaled:(BOOL)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isAngleOverridden;
- (BOOL)isScaledOverridden;
- (BOOL)scaled;

@end
