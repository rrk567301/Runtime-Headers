@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (BOOL)isRunning;
- (void)start;
- (double)total;
- (double)currentRun;
- (double)stop;
- (void).cxx_destruct;
- (BOOL)wasRunningBefore:(id)a0;

@end
