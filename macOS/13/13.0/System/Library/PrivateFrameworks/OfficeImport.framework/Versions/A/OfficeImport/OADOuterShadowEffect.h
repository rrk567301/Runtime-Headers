@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (float)xScale;
- (void)setXScale:(float)a0;
- (float)yScale;
- (void)setYScale:(float)a0;
- (float)xSkew;
- (void)setXSkew:(float)a0;
- (float)ySkew;
- (void)setYSkew:(float)a0;

@end
