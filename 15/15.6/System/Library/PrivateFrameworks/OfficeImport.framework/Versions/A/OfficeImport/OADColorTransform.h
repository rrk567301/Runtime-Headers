@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (float)alphaByApplyingTransforms:(id)a0 toAlpha:(float)a1;
+ (float)applyAlphaTransform:(id)a0 toAlpha:(float)a1;
+ (id)applyExpTransformWithValue:(float)a0 toColor:(id)a1;
+ (id)applyHSLTransform:(id)a0 toColor:(id)a1;
+ (id)applyRGBTransform:(id)a0 toColor:(id)a1 skipGamma:(BOOL)a2;
+ (id)colorByApplyingTransforms:(id)a0 toColor:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (int)type;
- (id)initWithType:(int)a0;

@end
