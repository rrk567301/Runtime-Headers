@interface NSThemeDocumentButtonCell : NSButtonCell

- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (long long)_bezelPresentationStateInView:(id)a0;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)accessibilityTitleAttribute;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_controlContentStyleInView:(id)a0;

@end
