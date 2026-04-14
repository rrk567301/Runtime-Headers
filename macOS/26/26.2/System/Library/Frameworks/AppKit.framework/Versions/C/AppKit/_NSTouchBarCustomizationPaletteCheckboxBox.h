@interface _NSTouchBarCustomizationPaletteCheckboxBox : NSView

@property (getter=isHighlighted) BOOL highlighted;
@property (getter=isChecked) BOOL checked;
@property BOOL hasAccessibilityAppearance;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (BOOL)allowsVibrancy;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
