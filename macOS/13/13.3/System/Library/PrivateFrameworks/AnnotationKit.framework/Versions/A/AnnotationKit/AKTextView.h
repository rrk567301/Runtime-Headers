@interface AKTextView : NSTextView

@property long long maximumNumberOfCharacters;

- (id)_layoutEngine;
- (BOOL)shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (BOOL)_setupFontSmoothingForLayerDrawingIntoContext:(struct CGContext { } *)a0 previousColor:(struct CGColor **)a1 previousFlag:(BOOL *)a2;

@end
