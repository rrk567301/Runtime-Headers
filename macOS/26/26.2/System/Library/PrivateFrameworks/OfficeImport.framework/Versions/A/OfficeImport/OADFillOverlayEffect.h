@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (int)blendMode;
- (void)setBlendMode:(int)a0;
- (id)init;
- (id)fill;
- (void)setFill:(id)a0;

@end
