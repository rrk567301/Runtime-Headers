@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (double)stop;
- (BOOL)isRunning;
- (double)currentRun;
- (BOOL)wasRunningBefore:(id)a0;
- (double)total;
- (void).cxx_destruct;
- (void)start;

@end
