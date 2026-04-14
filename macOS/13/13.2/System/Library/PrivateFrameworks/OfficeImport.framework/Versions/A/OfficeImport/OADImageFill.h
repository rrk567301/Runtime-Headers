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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)color;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (id)sourceRect;
- (void)setSourceRect:(id)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (BOOL)isBlipRefOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isTechniqueOverridden;
- (BOOL)isDpiOverridden;
- (id)blipRef;
- (void)setBlipRef:(id)a0;
- (int)dpi;
- (void)setDpi:(int)a0;
- (id)technique;
- (void)setTechnique:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
