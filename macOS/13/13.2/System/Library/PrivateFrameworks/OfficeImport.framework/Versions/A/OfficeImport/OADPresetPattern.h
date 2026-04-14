@interface OADPresetPattern : OADPattern {
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)a0;
+ (id)namedBitmapDataForPresetPatternType:(int)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setType:(int)a0;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;

@end
