@interface TSWPEquationInlineLayout : TSWPEquationLayout

@property (nonatomic) BOOL disableXHeightMatching;
@property (readonly, nonatomic) double fontSizeAdjustedForXHeight;

- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (BOOL)wantsRoundedInlinePosition;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)a0;
- (void)invalidateTextScalePercent;
- (double)descentForInlineLayout;
- (struct CGSize { double x0; double x1; })invalidEquationSize;
- (void)willLayoutInlineWithMaximumSize:(struct CGSize { double x0; double x1; })a0 textScale:(double)a1;
- (double)p_fontSizeThatMatchesXHeightForFontName:(id)a0 fontSize:(double)a1;
- (id)p_layoutTarget;

@end
