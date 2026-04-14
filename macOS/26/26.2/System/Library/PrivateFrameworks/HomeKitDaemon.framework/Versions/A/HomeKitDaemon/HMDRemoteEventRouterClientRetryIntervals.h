@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

+ (id)retryIntervalsForResidentClient;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (double)nextInterval;
- (id)initWithIntervals:(id)a0;

@end
