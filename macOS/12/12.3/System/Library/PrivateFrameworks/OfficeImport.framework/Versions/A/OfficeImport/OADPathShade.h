@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)initWithDefaults;
- (void)setFillToRect:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (id)fillToRect;

@end
