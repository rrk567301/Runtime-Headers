@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)nextInterval;

@end
