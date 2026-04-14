@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (unsigned long long)hash;
- (void)setBlendMode:(int)a0;
- (int)blendMode;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)fill;
- (void)setFill:(id)a0;

@end
