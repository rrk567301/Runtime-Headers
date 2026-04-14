@class _TtC6SiriUI21LoopedVideoPlayerView, _NSKeyValueObservation;

@interface SAEVoiceTrainingReadyController : OBTemplateContainerViewController <SiriUI.LoopedVideoPlayerViewDelegate>

@property (nonatomic, readonly) _TtC6SiriUI21LoopedVideoPlayerView *videoPlayerView;
@property (nonatomic, retain) _NSKeyValueObservation *appearanceObservation;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL showCompactTriggerDisclosure;

- (void)viewDidLoad;
- (void)finished;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithPrimaryButtonTitle:(id)a0 secondaryButtonTitle:(id)a1 cancelButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithTemplateView:(id)a0 primaryButtonTitle:(id)a1 secondaryButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (void)videoDidReload;

@end
