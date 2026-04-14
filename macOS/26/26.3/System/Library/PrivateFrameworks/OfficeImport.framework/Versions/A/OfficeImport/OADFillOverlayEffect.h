@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (id)description;
- (id)init;
- (int)blendMode;
- (void)setBlendMode:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fill;
- (void)setFill:(id)a0;

@end
