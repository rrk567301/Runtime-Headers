@interface OADPercentBulletSize : OADBulletSize {
    float mPercent;
}

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (float)percent;
- (id)initWithPercent:(float)a0;

@end
