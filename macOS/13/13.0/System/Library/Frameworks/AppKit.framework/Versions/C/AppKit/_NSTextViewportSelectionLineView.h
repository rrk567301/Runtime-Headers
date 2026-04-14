@interface _NSTextViewportSelectionLineView : NSView

- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)_windowChangedKeyState;
- (BOOL)shouldBeArchived;
- (BOOL)translatesAutoresizingMaskIntoConstraints;

@end
