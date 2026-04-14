@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (void)setLimit:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)limit;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isLimitOverridden;
- (void)removeUnnecessaryOverrides;

@end
