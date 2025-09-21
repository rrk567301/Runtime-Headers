@interface _NSCustomizationSheetBackgroundView : NSView

@property double paletteScaleFactor;

+ (id)keyPathsForValuesAffectingPaletteScaleFactor;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
