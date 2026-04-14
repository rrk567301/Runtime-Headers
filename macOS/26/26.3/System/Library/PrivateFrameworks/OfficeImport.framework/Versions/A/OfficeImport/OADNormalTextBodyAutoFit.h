@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)fontScalePercent;
- (id)initWithFontScalePercent:(float)a0 lineSpacingReductionPercent:(float)a1;
- (float)lineSpacingReductionPercent;

@end
