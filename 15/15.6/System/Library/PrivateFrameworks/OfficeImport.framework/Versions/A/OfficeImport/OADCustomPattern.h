@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    char mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)blipRef;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isBlipRefOverridden;
- (void)setBlipRef:(id)a0;

@end
