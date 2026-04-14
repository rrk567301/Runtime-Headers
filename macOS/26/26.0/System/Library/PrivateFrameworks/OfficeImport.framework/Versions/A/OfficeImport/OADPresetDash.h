@interface OADPresetDash : OADDash {
    char mType;
    unsigned char mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)type;
- (void)setType:(char)a0;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;

@end
