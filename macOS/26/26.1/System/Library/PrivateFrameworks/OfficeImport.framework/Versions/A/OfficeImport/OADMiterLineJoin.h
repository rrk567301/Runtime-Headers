@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLimit:(float)a0;
- (BOOL)isEqual:(id)a0;
- (float)limit;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isLimitOverridden;
- (void)removeUnnecessaryOverrides;

@end
