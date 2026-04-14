@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (float)alphaByApplyingTransforms:(id)a0 toAlpha:(float)a1;
+ (float)applyAlphaTransform:(id)a0 toAlpha:(float)a1;
+ (id)applyExpTransformWithValue:(float)a0 toColor:(id)a1;
+ (id)applyHSLTransform:(id)a0 toColor:(id)a1;
+ (id)applyRGBTransform:(id)a0 toColor:(id)a1 skipGamma:(BOOL)a2;
+ (id)colorByApplyingTransforms:(id)a0 toColor:(id)a1;

- (id)initWithType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
