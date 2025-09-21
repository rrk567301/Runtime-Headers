@interface _NSTouchBarCustomizationPaletteCheckboxBox : NSView

@property (getter=isHighlighted) BOOL highlighted;
@property (getter=isChecked) BOOL checked;
@property BOOL hasAccessibilityAppearance;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
