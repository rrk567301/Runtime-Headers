@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (id)color;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBulletColor:(id)a0;

@end
