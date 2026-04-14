@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isAngleOverridden;
- (BOOL)isScaledOverridden;
- (BOOL)scaled;
- (void)setScaled:(BOOL)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
