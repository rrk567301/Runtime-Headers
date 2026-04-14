@interface TLKLayoutUtilities : NSObject

+ (double)deviceScaledRoundedValue:(double)a0 forView:(id)a1;
+ (struct CGSize { double x0; double x1; })idealImageSizeWithSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
+ (double)mainScreenBackingScaleFactor;
+ (BOOL)isLTR;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)a0 top:(double)a1 bottom:(double)a2 view:(id)a3;
+ (void)requireIntrinsicSizeForView:(id)a0 withPriority:(float)a1;
+ (struct CGSize { double x0; double x1; })maxThumbnailSize;
+ (double)flooredValue:(double)a0 inView:(id)a1;
+ (double)deviceScaledFlooredValue:(double)a0 forView:(id)a1;
+ (struct CGSize { double x0; double x1; })maxThumbnailSizeIsCompactWidth:(BOOL)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })deviceScaledRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
+ (struct CGSize { double x0; double x1; })deviceScaledRoundedSize:(struct CGSize { double x0; double x1; })a0 forView:(id)a1;
+ (BOOL)isSuperLargeAccessibilitySize;
+ (void)requireIntrinsicSizeForView:(id)a0;
+ (BOOL)isWideScreen;
+ (BOOL)widthIsCompact:(double)a0;
+ (double)roundedValue:(double)a0 inView:(id)a1;
+ (double)scaledValueForValue:(double)a0 withFont:(id)a1 view:(id)a2;
+ (void)applyRowBoundedSizingToImageView:(id)a0 isCompactWidth:(BOOL)a1;
+ (double)contentHeightOfTableView:(id)a0 forWidth:(double)a1 maxHeight:(double)a2;
+ (struct CGSize { double x0; double x1; })minimumButtonSize;
+ (double)ceilingValue:(double)a0 inView:(id)a1;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })deviceScaledRoundedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 forView:(id)a1;

@end
