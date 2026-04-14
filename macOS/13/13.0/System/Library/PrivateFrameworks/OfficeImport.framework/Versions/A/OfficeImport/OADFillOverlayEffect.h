@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fill;
- (int)blendMode;
- (void)setBlendMode:(int)a0;
- (void)setFill:(id)a0;

@end
