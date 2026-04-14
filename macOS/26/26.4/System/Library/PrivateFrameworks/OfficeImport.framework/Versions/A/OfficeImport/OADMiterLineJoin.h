@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLimit:(float)a0;
- (float)limit;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isLimitOverridden;
- (void)removeUnnecessaryOverrides;

@end
