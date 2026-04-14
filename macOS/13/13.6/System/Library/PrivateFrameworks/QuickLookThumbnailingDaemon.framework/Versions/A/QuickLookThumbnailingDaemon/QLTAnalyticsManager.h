@interface QLTAnalyticsManager : NSObject

+ (id)sharedManager;

- (id)_eventsQueue;
- (void)_sendEvent:(id)a0;
- (void)sendCacheSizeEventWithCacheSize:(unsigned long long)a0;

@end
