@interface VUIBaseView : NSView

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) BOOL vuiViewClipsToBounds;

- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isFlipped;
- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (BOOL)wantsDefaultClipping;
- (void)vui_traitCollectionDidChange:(id)a0;
- (void)setVuiClipsToBounds:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;

@end
