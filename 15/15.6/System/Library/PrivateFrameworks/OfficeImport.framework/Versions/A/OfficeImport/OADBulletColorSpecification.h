@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (id)initWithBulletColor:(id)a0;

@end
