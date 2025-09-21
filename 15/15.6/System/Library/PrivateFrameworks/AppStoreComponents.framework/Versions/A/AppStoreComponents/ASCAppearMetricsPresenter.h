@class ASCMetrics, ASCMetricsActivity, NSView, NSNotificationCenter, NSString, ASCMetricsScrollObserver, NSObject;
@protocol OS_os_log, ASCViewModel;

@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ASCMetrics *metrics;
@property (nonatomic, getter=isAppeared) char appeared;
@property (nonatomic, getter=isSettingModel) char settingModel;
@property (retain, nonatomic) ASCMetricsScrollObserver *scrollObserver;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic, getter=isEnteringBackground) char enteringBackground;
@property (nonatomic, getter=isEnteringForeground) char enteringForeground;
@property (readonly, nonatomic) char canAppear;
@property (readonly, nonatomic) char canDisappear;
@property (readonly, weak, nonatomic) NSView *view;
@property (copy, nonatomic) ASCMetricsActivity *activity;
@property (nonatomic, getter=isEnabled) char enabled;
@property (copy, nonatomic) id<ASCViewModel> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)viewDidMoveToWindow;
- (void)scrollViewDidScroll:(id)a0;
- (void)appearIfNeeded;
- (void)disappearIfNeeded;
- (void)hostDidEnterBackground;
- (void)hostWillEnterForeground;
- (id)initWithView:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:(id)a0;
- (void)viewDidFailRequest:(id)a0 withError:(id)a1;
- (void)viewDidRetryFailedRequest;
- (void)viewDidSetHidden;

@end
