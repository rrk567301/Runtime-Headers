@interface OADPresetDash : OADDash {
    char mType;
    unsigned char mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (void)setType:(char)a0;
- (char)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;

@end
