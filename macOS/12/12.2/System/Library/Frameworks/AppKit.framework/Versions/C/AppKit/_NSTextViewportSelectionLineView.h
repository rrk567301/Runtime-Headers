@interface _NSTextViewportSelectionLineView : NSView

- (id)description;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_windowChangedKeyState;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (BOOL)shouldBeArchived;

@end
