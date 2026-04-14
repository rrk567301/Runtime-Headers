@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (BOOL)scaled;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaults;
- (void)setScaled:(BOOL)a0;
- (void)setAngle:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;

@end
