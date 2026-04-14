@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fillRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillRectOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)a0;

@end
