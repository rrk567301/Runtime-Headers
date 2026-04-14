@interface PKPopUpButtonCell : NSPopUpButtonCell

- (struct CGPoint { double x0; double x1; })_menuLocationForEvent:(id)a0 inCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (unsigned long long)arrowPosition;
- (unsigned long long)bezelStyle;
- (unsigned long long)controlSize;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)usesItemFromMenu;

@end
