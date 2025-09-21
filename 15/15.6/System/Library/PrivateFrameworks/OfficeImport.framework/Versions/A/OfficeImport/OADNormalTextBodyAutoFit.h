@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (float)fontScalePercent;
- (id)initWithFontScalePercent:(float)a0 lineSpacingReductionPercent:(float)a1;
- (float)lineSpacingReductionPercent;

@end
