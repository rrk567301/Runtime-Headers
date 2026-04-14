@interface _NSTouchBarCustomizationPaletteCheckboxBox : NSView

@property (getter=isHighlighted) BOOL highlighted;
@property (getter=isChecked) BOOL checked;
@property BOOL hasAccessibilityAppearance;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)wantsLayer;

@end
