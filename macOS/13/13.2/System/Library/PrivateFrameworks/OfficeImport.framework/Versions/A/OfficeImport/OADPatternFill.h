@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)pattern;
- (void)setColor:(id)a0;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (id)fgColor;
- (void)setFgColor:(id)a0;
- (void)setPattern:(id)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isFgColorOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
