@class NSString;

@interface VUIBaseView : NSView <VUINSTraitEnvironment>

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)prepareForReuse;
- (void)mouseDown:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;

@end
