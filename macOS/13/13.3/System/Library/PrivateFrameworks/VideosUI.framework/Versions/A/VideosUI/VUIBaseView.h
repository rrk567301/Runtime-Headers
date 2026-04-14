@interface VUIBaseView : NSView

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) BOOL vuiViewClipsToBounds;

- (void)prepareForReuse;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)wantsDefaultClipping;
- (void)setVuiClipsToBounds:(BOOL)a0;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;
- (void)vui_traitCollectionDidChange:(id)a0;

@end
