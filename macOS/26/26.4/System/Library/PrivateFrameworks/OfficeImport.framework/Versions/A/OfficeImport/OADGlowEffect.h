@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (float)radius;
- (void)setRadius:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)setColor:(id)a0;

@end
