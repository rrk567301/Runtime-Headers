@interface LUITextFieldCell : NSTextFieldCell

@property BOOL shouldSmoothFonts;

- (void)_setupDefaults;
- (id)initWithCoder:(id)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (id)placeholderString;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)_insertionPointColor;

@end
