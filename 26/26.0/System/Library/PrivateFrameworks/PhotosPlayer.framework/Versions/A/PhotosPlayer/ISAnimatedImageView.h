@class ISAnimatedImagePlayer, NSString, PFAnimatedImage;

@interface ISAnimatedImageView : NSView <ISAnimatedImagePlayerDestination>

@property (retain, nonatomic) ISAnimatedImagePlayer *player;
@property (retain, nonatomic) PFAnimatedImage *image;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (BOOL)wantsUpdateLayer;
- (id)initWithAnimatedImage:(id)a0;
- (void)animatedImagePlayerFrameDidChange:(id)a0;
- (BOOL)animatedImagePlayerIsReadyToDisplay:(id)a0;
- (id)initWithAnimatedImagePlayer:(id)a0;
- (void)_isAnimatedImageNSView_commonInit;

@end
