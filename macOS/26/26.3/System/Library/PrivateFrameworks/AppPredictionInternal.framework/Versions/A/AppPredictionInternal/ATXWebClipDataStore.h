@class _ATXDataStore;
@protocol ATXAppClipLaunchListenerProtocol;

@interface ATXWebClipDataStore : NSObject

@property (readonly, nonatomic) _ATXDataStore *dataStore;
@property (readonly, nonatomic) id<ATXAppClipLaunchListenerProtocol> appClipUsageUpdateListener;

- (id)webClipBundleIdsForAppClip:(id)a0;
- (id)initWithDataStore:(id)a0;
- (void)updateWithUsageEvent:(id)a0;
- (id)init;
- (id)initWithDataStore:(id)a0 contextUpdateListener:(id)a1;
- (void).cxx_destruct;

@end
