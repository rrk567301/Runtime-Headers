@class AUAudioUnit, _TtC12CoreAudioKit21AUGenericViewInternal;

@interface AUGenericViewController : NSViewController

@property (readonly) _TtC12CoreAudioKit21AUGenericViewInternal *genericView;
@property (retain, nonatomic) AUAudioUnit *auAudioUnit;

- (id)init;
- (void)setAudioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)addGestureObservers;
- (void)genericViewBeginGestureMessageReceived:(id)a0;
- (void)genericViewEndGestureMessageReceived:(id)a0;
- (void)genericViewNotificationMessageReceived:(id)a0;
- (id)getAuAudioUnit;

@end
