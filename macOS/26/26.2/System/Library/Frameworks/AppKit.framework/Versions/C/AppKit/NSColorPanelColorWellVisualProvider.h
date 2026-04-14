@class NSAppearance;

@interface NSColorPanelColorWellVisualProvider : NSColorWellAppearanceBasedVisualProvider

@property (retain) NSAppearance *appearanceForRenderingColor;

- (void)dealloc;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawInteriorBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawWithStrokeColor:(id)a0;
- (BOOL)drawColor;
- (struct CGSize { double x0; double x1; })minimumDrawingSize;

@end
