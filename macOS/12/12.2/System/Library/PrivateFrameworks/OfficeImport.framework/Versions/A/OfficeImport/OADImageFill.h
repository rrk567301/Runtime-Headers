@class OADImageFillTechnique, OADBlipRef, OADRelativeRect;

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)color;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (void)setTechnique:(id)a0;
- (void)setSourceRect:(id)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setBlipRef:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)rotateWithShape;
- (void)setDpi:(int)a0;
- (id)technique;
- (BOOL)isBlipRefOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isDpiOverridden;
- (BOOL)isTechniqueOverridden;
- (id)blipRef;
- (id)sourceRect;
- (int)dpi;

@end
