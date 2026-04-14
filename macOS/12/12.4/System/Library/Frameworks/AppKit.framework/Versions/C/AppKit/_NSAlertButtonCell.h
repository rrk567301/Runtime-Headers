@interface _NSAlertButtonCell : NSButtonCell

- (struct __CFString { } *)_coreUIWidgetName;
- (BOOL)_isDefaultButtonCell;
- (void)setKeyEquivalent:(id)a0;
- (long long)interiorBackgroundStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_adjustTitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forTrailingEllipses:(id)a1;
- (BOOL)_needRedrawOnWindowChangedKeyState;

@end
