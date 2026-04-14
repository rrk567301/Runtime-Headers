@interface NSSystemStatusBar : NSStatusBar

- (void)dealloc;
- (id)_name;
- (double)thickness;
- (double)contentPadding;
- (struct CGSize { double x0; double x1; })backgroundSelectionInset;
- (id)_createStatusItemControlInWindow:(id)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 highlight:(BOOL)a2;

@end
