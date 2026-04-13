@interface OADReflectionEffect : OADEffect {
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (float)direction;
- (void)setBlurRadius:(float)a0;
- (float)blurRadius;
- (void)setDirection:(float)a0;
- (float)distance;
- (void)setDistance:(float)a0;
- (float)endPosition;
- (void)setEndPosition:(float)a0;
- (float)startPosition;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)rotateWithShape;
- (float)xScale;
- (void)setXScale:(float)a0;
- (float)yScale;
- (void)setYScale:(float)a0;
- (float)xSkew;
- (void)setXSkew:(float)a0;
- (float)ySkew;
- (void)setYSkew:(float)a0;
- (float)startOpacity;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setStartOpacity:(float)a0;
- (void)setStartPosition:(float)a0;
- (void)setEndOpacity:(float)a0;
- (void)setFadeDirection:(float)a0;

@end
