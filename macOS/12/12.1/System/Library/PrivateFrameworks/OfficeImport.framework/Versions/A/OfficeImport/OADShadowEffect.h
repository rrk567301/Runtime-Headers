@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (void)setBlurRadius:(float)a0;
- (float)blurRadius;
- (id)color;
- (void)setColor:(id)a0;
- (float)distance;
- (float)angle;
- (void)setDistance:(float)a0;
- (void)setAngle:(float)a0;
- (void)setStyleColor:(id)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;

@end
