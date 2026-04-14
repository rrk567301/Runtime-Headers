@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface SSApplicationManager : NSObject

@property (retain) NSCache *definitelyCorrectCache;
@property (retain) NSCache *possiblyCorrectCache;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)purgeCache;
- (BOOL)bundleIdIsScreenTimeBlocked:(id)a0 completion:(id /* block */)a1;
- (BOOL)cachedScreenTimeValueForBundleIdentifier:(id)a0;
- (id)currentApplications;
- (void)getScreenTimeBlockedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
