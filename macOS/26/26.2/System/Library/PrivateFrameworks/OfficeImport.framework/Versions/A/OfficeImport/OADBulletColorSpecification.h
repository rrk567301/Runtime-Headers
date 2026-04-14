@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (unsigned long long)hash;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBulletColor:(id)a0;

@end
