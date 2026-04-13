@interface VUIBaseView : NSView

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) BOOL vuiViewClipsToBounds;

- (void)prepareForReuse;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)wantsDefaultClipping;
- (void)setVuiClipsToBounds:(BOOL)a0;
- (void)vui_traitCollectionDidChange:(id)a0;
- (BOOL)vuiIsUserInteractionEnabled;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;

@end
