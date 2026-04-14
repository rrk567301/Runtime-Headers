@interface PSUCurrentActivityManager : NSObject

@property (class, readonly, nonatomic) PSUCurrentActivityManager *sharedInstance;

- (void)dealloc;
- (id)init;
- (void)prewarm;
- (void)_visibilityForAppWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_hasLayoutInfo;
- (BOOL)_isAppVisibleWithBundleId:(id)a0;
- (void)fetchUserActivityContentIdentifiersForBundleId:(id)a0 completionHandler:(id /* block */)a1;

@end
