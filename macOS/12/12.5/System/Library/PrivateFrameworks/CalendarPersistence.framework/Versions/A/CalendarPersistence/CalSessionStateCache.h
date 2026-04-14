@class NSString;

@interface CalSessionStateCache : NSObject <CalAgentCacheObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionStateCache;
+ (void)updateConnectedState:(int)a0 forSessionID:(id)a1;

- (id)init;
- (void)cacheDidUpdate;
- (int)connectedStateForSessionID:(id)a0;

@end
