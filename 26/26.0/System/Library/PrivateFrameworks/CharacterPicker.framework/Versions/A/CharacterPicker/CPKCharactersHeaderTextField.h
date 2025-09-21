@interface CPKCharactersHeaderTextField : NSTextField

@property BOOL createdForPopover;

- (void)mouseDown:(id)a0;
- (BOOL)allowsVibrancy;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPopover:(BOOL)a1;

@end
