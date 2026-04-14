@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)setFromColor:(id)a0;
- (void)setToColor:(id)a0;
- (id)fromColor;
- (id)toColor;
- (void)setStyleColor:(id)a0;

@end
