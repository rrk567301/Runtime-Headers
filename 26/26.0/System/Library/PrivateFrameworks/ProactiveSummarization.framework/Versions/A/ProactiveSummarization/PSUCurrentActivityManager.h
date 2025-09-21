@interface PSUCurrentActivityManager : NSObject

@property (class, readonly, nonatomic) PSUCurrentActivityManager *sharedInstance;

- (void)prewarm;
- (void)dealloc;
- (id)init;
- (BOOL)_hasLayoutInfo;
- (BOOL)_isAppVisibleWithBundleId:(id)a0;
- (void)_visibilityForAppWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchUserActivityContentIdentifiersForBundleId:(id)a0 completionHandler:(id /* block */)a1;

@end
