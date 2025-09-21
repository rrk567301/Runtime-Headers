@interface OADLinearShade : OADShade {
    float mAngle;
    char mIsAngleOverridden;
    char mScaled;
    char mIsScaledOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAngleOverridden;
- (char)isAnythingOverridden;
- (char)isScaledOverridden;
- (void)removeUnnecessaryOverrides;
- (char)scaled;
- (void)setScaled:(char)a0;

@end
