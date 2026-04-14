@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (void)setColor:(id)a0;
- (id)description;
- (id)init;
- (id)color;
- (void)setRadius:(float)a0;
- (float)radius;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
