@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (id)fillToRect;
- (void)setFillToRect:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
