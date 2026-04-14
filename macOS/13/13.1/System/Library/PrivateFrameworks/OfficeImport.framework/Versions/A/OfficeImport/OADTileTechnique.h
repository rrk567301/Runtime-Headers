@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (id)initWithDefaults;
- (float)offsetX;
- (float)offsetY;
- (BOOL)isAnythingOverridden;
- (BOOL)isFlipModeOverridden;
- (int)flipMode;
- (void)setFlipMode:(int)a0;
- (BOOL)isOffsetXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isScaleYOverridden;
- (BOOL)isAlignmentOverridden;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (float)scaleX;
- (void)setScaleX:(float)a0;
- (float)scaleY;
- (void)setScaleY:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
