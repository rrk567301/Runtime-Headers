@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

+ (id)retryIntervalsForResidentClient;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (double)nextInterval;
- (id)initWithIntervals:(id)a0;

@end
