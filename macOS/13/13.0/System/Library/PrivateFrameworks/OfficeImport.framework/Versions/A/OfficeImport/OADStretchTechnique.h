@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fillRect;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillRectOverridden;
- (void)setFillRect:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
