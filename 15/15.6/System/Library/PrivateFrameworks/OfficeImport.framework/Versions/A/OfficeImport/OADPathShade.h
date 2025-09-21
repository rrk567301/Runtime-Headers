@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    char mIsTypeOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithDefaults;
- (id)fillToRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isFillToRectOverridden;
- (char)isTypeOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillToRect:(id)a0;

@end
