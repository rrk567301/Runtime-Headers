@class NPKWatchDisplayMetrics;

@interface NPKPassViewGeometry : NSObject

@property (readonly, nonatomic) NPKWatchDisplayMetrics *displayMetrics;

- (void).cxx_destruct;
- (double)cardHeight;
- (double)cardWidth;
- (double)_cardCornerRadiusForCardSize:(struct CGSize { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1 naturalCornerRadius:(double)a2;
- (double)_heightWithHorizontalMargin:(double)a0;
- (double)_scaleFactorForLayoutVariant:(unsigned long long)a0;
- (double)_scaledMetricForValueInPixels:(double)a0 relativeToVariant:(unsigned long long)a1;
- (double)cardCornerRadius;
- (double)cardCornerRadiusForCardSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })cardSize;
- (double)focusedCardHeight;
- (id)initWithDisplayMetrics:(id)a0;
- (double)miniatureCardHeight;
- (double)proportionalHeightWithWidth:(double)a0;
- (double)unfocusedCardHeight;
- (double)valueForLayoutVariantExtendedWithValue1:(double)a0 value2:(double)a1 value3:(double)a2 value4:(double)a3 value5:(double)a4 value6:(double)a5 value7:(double)a6;
- (double)valueForLayoutVariantWithValue1:(double)a0 value2:(double)a1 value3:(double)a2 value4:(double)a3;

@end
