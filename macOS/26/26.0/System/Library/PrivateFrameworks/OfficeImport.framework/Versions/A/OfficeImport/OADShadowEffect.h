@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (float)distance;
- (void)setDistance:(float)a0;
- (void)setBlurRadius:(float)a0;
- (float)blurRadius;
- (id)initWithType:(int)a0;
- (id)color;
- (float)angle;
- (id)description;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
