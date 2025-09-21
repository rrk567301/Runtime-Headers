@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)toColor;
- (id)fromColor;
- (void)setFromColor:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setToColor:(id)a0;

@end
