@interface NSSearchFieldAppearanceBasedMetrics : NSObject

+ (double)cancelButtonInnerPadding;
+ (double)cancelButtonOuterPadding;
+ (struct CGSize { double x0; double x1; })cancelButtonSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)legacyCancelButtonInnerPadding;
+ (double)legacySearchButtonInnerPaddingForHeight:(double)a0 hasMenu:(BOOL)a1;
+ (double)searchButtonInnerPadding;
+ (double)searchButtonOuterPadding;
+ (struct CGSize { double x0; double x1; })searchButtonSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
