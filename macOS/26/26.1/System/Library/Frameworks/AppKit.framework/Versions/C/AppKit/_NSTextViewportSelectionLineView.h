@interface _NSTextViewportSelectionLineView : NSView

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)description;
- (void)updateLayer;
- (void)_windowChangedKeyState;
- (BOOL)shouldBeArchived;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (BOOL)wantsUpdateLayer;

@end
