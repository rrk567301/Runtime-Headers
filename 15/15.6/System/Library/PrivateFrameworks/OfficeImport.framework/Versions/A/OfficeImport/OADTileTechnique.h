@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    char mIsOffsetXOverridden;
    float mOffsetY;
    char mIsOffsetYOverridden;
    float mScaleX;
    char mIsScaleXOverridden;
    float mScaleY;
    char mIsScaleYOverridden;
    int mFlipMode;
    char mIsFlipModeOverridden;
    int mAlignment;
    char mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (id)initWithDefaults;
- (float)offsetY;
- (float)offsetX;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (char)isAlignmentOverridden;
- (char)isAnythingOverridden;
- (char)isFlipModeOverridden;
- (char)isOffsetXOverridden;
- (char)isOffsetYOverridden;
- (char)isScaleXOverridden;
- (char)isScaleYOverridden;
- (void)removeUnnecessaryOverrides;
- (float)scaleX;
- (float)scaleY;
- (void)setFlipMode:(int)a0;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (void)setScaleX:(float)a0;
- (void)setScaleY:(float)a0;

@end
