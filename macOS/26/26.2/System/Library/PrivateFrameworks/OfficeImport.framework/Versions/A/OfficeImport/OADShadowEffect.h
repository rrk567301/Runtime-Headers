@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (float)blurRadius;
- (void)setDistance:(float)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (void)setColor:(id)a0;
- (float)distance;
- (void).cxx_destruct;
- (void)setBlurRadius:(float)a0;
- (id)description;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
