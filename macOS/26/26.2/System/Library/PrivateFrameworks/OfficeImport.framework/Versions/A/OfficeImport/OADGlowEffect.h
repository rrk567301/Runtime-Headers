@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (float)radius;
- (unsigned long long)hash;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setRadius:(float)a0;

@end
