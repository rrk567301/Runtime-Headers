@interface OADPresetDash : OADDash {
    char mType;
    unsigned char mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setType:(char)a0;
- (char)type;
- (id)initWithDefaults;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isTypeOverridden;

@end
