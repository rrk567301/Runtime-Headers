@class TLKProminenceView;

@interface SearchUICollectionViewItemView : NUIContainerBoxView

@property (retain) TLKProminenceView *backgroundView;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;

@end
