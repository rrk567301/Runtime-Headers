@class NSString;

@interface VUIBaseView : NSView <VUINSTraitEnvironment>

@property (nonatomic, getter=isUserInteractionEnabled) char userInteractionEnabled;
@property (nonatomic) char vuiViewClipsToBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (char)wantsDefaultClipping;
- (void)setVuiClipsToBounds:(char)a0;
- (void)setVuiUserInteractionEnabled:(char)a0;
- (char)vuiIsUserInteractionEnabled;

@end
