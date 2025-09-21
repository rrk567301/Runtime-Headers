@interface OADPresetPattern : OADPattern {
    int mType;
    char mIsTypeOverridden;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)a0;
+ (id)namedBitmapDataForPresetPatternType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isTypeOverridden;

@end
