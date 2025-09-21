@interface _NSTouchBarCustomizationPaletteCheckboxBox : NSView

@property (getter=isHighlighted) char highlighted;
@property (getter=isChecked) char checked;
@property char hasAccessibilityAppearance;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (char)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)updateLayer;
- (char)wantsLayer;
- (char)wantsUpdateLayer;

@end
