@class NSString;

@interface VUIBaseView : NSView <VUINSTraitEnvironment>

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;

@end
