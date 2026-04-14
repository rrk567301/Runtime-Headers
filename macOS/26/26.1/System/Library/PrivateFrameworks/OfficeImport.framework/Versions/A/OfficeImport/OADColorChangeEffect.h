@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)toColor;
- (id)fromColor;
- (void)setFromColor:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setToColor:(id)a0;

@end
