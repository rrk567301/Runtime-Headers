@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fillRect;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isFillRectOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)a0;

@end
