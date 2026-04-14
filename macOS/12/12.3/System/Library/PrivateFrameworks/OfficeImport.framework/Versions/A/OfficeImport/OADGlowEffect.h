@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (float)radius;
- (void)setRadius:(float)a0;

@end
