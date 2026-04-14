@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)whiteFill;
+ (id)blackFill;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (id)initWithDefaults;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;
- (BOOL)isColorOverridden;
- (BOOL)isAnythingOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
