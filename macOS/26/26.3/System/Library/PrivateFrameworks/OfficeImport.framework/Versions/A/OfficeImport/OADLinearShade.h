@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (float)angle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setScaled:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (BOOL)scaled;
- (void)setAngle:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;

@end
