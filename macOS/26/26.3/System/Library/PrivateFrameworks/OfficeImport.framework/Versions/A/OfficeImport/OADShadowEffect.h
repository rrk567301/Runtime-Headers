@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (float)blurRadius;
- (void)setDistance:(float)a0;
- (void)setBlurRadius:(float)a0;
- (id)initWithType:(int)a0;
- (float)distance;
- (void)setColor:(id)a0;
- (id)description;
- (id)color;
- (float)angle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
