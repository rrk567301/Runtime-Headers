@class NSMutableArray, NSDate;

@interface TCTextCompositionSmartRepliesRateLimiter : NSObject {
    NSMutableArray *_previousExecutionDates;
    NSDate *_overridedCurrentDate;
}

+ (id)sharedRateLimiter;

- (id)currentDate;
- (void).cxx_destruct;
- (id)init;
- (void)overrideCurrentDateForThrottleTesting:(id)a0;
- (void)resetRateLimiter;
- (BOOL)shouldThrottleGeneration:(BOOL)a0;
- (void)tallyGeneration:(BOOL)a0;

@end
