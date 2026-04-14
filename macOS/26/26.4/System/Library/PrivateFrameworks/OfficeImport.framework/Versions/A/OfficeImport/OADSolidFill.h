@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)color;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isColorOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
