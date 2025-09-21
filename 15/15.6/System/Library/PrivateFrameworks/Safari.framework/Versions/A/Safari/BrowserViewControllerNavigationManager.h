@class NSMutableOrderedSet, NSTimer, NSHashTable;
@protocol BrowserViewControllerLoading;

@interface BrowserViewControllerNavigationManager : NSObject {
    NSHashTable *_loadingBrowserViewControllers;
    NSMutableOrderedSet *_browserViewControllersWithQueuedNavigation;
    id<BrowserViewControllerLoading> _mostRecentlyLoadingBrowserViewController;
    NSTimer *_dequeueTimer;
    double _queuedRequestInitialDelay;
    double _queuedRequestDelay;
}

@property (readonly, nonatomic) char hasQueuedNavigations;
@property (readonly, nonatomic) unsigned long long numberOfLoadingBrowserViewControllers;

- (id)init;
- (void).cxx_destruct;
- (char)isBrowserViewControllerLoading:(id)a0;
- (long long)_currentThermalPressureLevel;
- (void)_dequeueNavigationIfPossible;
- (unsigned long long)_maxAllowedLoadingWebViews;
- (void)_setUpDequeueTimerIfNeeded;
- (char)_shouldDequeueNavigation;
- (void)browserViewControllerDidBeginLoading:(id)a0;
- (void)browserViewControllerDidFinishLoading:(id)a0;
- (void)enqueueNavigationForBrowserViewController:(id)a0;
- (char)isNavigationPendingForBrowserViewController:(id)a0;
- (void)removeAllQueuedNavigations;
- (void)removeQueuedNavigationForBrowserViewController:(id)a0;
- (void)removeQueuedNavigationsForBrowserViewControllers:(id)a0;

@end
