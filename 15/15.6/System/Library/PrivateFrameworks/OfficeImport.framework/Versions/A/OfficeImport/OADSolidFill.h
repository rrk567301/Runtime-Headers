@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    char mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isColorOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;
- (char)usesPlaceholderColor;

@end
