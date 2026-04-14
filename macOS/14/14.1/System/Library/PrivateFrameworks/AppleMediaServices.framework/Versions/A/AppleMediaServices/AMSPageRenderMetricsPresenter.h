@class AMSPageRenderMetricsEvent, AMSMetrics;
@protocol AMSBagProtocol;

@interface AMSPageRenderMetricsPresenter : NSObject

@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSMetrics *metrics;
@property (retain) AMSPageRenderMetricsEvent *pageRenderEvent;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)endWithActivity:(long long)a0 pageMetrics:(id)a1;
- (void)enqueueEvent;
- (id)initWithBag:(id)a0 metrics:(id)a1;
- (void)startWithActivity:(long long)a0;

@end
