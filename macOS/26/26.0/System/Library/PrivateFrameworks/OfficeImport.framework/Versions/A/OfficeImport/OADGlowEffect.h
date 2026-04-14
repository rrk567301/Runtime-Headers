@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (void)setRadius:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (id)init;
- (id)description;
- (float)radius;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
