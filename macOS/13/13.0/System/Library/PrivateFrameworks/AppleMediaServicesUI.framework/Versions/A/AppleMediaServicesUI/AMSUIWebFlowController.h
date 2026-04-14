@class NSString, AMSUIWebClientContext, NSMutableSet, AMSUIWebContainerViewController, NSLock;

@interface AMSUIWebFlowController : NSObject

@property (readonly, weak) AMSUIWebContainerViewController *rootContainer;
@property (readonly, weak) AMSUIWebClientContext *context;
@property (retain) NSString *currentRefreshToken;
@property (retain) NSLock *timeoutLock;
@property (retain) NSMutableSet *timeouts;
@property unsigned long long previousNavigationIndex;
@property long long previousPageIndex;
@property (readonly, weak) AMSUIWebContainerViewController *currentContainer;

- (void).cxx_destruct;
- (void)presentWithOptions:(id)a0;
- (id)initWithRootContainer:(id)a0 context:(id)a1;
- (void)dismissViewController;
- (void)performSafeTransitionFrom:(id)a0 block:(id /* block */)a1;
- (void)popViewController;
- (void)popViewControllerToRelativeIndex:(long long)a0;
- (void)pushWithOptions:(id)a0;
- (id)replaceWithPageModel:(id)a0 forContainer:(id)a1 options:(id)a2;
- (id)refreshPageForContainer:(id)a0 options:(id)a1;
- (void)startTimeoutInterruption;
- (void)startTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)stopTimeoutInterruption;
- (id)_refreshPageWithForContainer:(id)a0 options:(id)a1 isRetry:(BOOL)a2;
- (void)_setWindowSize:(struct CGSize { double x0; double x1; })a0 onContainer:(id)a1 completion:(id /* block */)a2;
- (void)_takeSnapshotFromContainer:(id)a0 completion:(id /* block */)a1;

@end
