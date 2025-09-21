@class OADImageFillTechnique, OADBlipRef, OADRelativeRect;

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    char mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    char mIsDpiOverridden;
    char mRotateWithShape;
    char mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (void)setParent:(id)a0;
- (void)setSourceRect:(id)a0;
- (id)sourceRect;
- (id)initWithDefaults;
- (int)dpi;
- (char)isDpiOverridden;
- (id)blipRef;
- (char)rotateWithShape;
- (void)setDpi:(int)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)isAnythingOverridden;
- (char)isBlipRefOverridden;
- (char)isRotateWithShapeOverridden;
- (char)isSourceRectOverridden;
- (char)isTechniqueOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setBlipRef:(id)a0;
- (void)setRotateWithShape:(char)a0;
- (void)setStyleColor:(id)a0;
- (void)setTechnique:(id)a0;
- (id)technique;

@end
