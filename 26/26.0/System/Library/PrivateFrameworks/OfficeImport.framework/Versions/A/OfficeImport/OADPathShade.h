@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setType:(int)a0;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fillToRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillToRect:(id)a0;

@end
