@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isBlipRefOverridden;
- (id)blipRef;
- (void)setBlipRef:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;

@end
