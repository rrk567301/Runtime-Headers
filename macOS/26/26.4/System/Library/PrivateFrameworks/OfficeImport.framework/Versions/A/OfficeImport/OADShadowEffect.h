@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (void)setDistance:(float)a0;
- (float)distance;
- (id)initWithType:(int)a0;
- (float)blurRadius;
- (void)setBlurRadius:(float)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (unsigned long long)hash;
- (id)description;
- (float)angle;
- (void)setColor:(id)a0;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
