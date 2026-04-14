@class TLKProminenceView;

@interface SearchUICollectionViewItemView : NUIContainerBoxView

@property (retain) TLKProminenceView *backgroundView;

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;

@end
