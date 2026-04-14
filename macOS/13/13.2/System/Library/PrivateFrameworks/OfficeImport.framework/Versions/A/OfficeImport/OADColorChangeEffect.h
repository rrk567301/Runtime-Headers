@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setStyleColor:(id)a0;
- (id)fromColor;
- (void)setFromColor:(id)a0;
- (id)toColor;
- (void)setToColor:(id)a0;

@end
