@class NSMutableArray, NSDate;

@interface TCTextCompositionSmartRepliesRateLimiter : NSObject {
    NSMutableArray *_previousExecutionDates;
    NSDate *_overridedCurrentDate;
}

+ (id)sharedRateLimiter;

- (id)init;
- (void).cxx_destruct;
- (id)currentDate;
- (void)overrideCurrentDateForThrottleTesting:(id)a0;
- (void)resetRateLimiter;
- (char)shouldThrottleGeneration:(char)a0;
- (void)tallyGeneration:(char)a0;

@end
