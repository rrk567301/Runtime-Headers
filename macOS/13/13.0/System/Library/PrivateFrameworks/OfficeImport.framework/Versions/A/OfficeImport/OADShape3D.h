@class OADColor, OADBevel;

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setMaterial:(int)a0;
- (int)material;
- (id)topBevel;
- (void)setTopBevel:(id)a0;
- (id)bottomBevel;
- (void)setBottomBevel:(id)a0;
- (id)extrusionColor;
- (void)setExtrusionColor:(id)a0;
- (float)extrusionHeight;
- (void)setExtrusionHeight:(float)a0;
- (id)contourColor;
- (void)setContourColor:(id)a0;
- (float)contourWidth;
- (void)setContourWidth:(float)a0;
- (float)shapeDepth;
- (void)setShapeDepth:(float)a0;

@end
