@class NSTimer, NSFileHandle, NSDate, NSMutableArray, StressHUD;

@interface StressTest : NSObject {
    NSDate *startTime;
    NSDate *webProcessStartTime;
    NSTimer *loadTimer;
    NSMutableArray *URLHistory;
    unsigned long long webProcessCrashCount;
    NSFileHandle *sessionFileHandle;
    NSMutableArray *sessionHistory;
    BOOL logNextURLForReplay;
    StressHUD *stressHUD;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (unsigned long long)pageCount;
- (void)webProcessDidCrash;
- (BOOL)isStressTestRunning;
- (void)pageLoadFinishedWithURL:(id)a0;
- (void)pageLoadStartedWithURL:(id)a0;
- (void)replaySession:(id)a0;
- (double)upTime;
- (double)webProcessUpTime;
- (unsigned long long)webProcessCrashCount;
- (void)validatedStart;
- (void)loadWillFail;
- (void)validateStressTest;
- (void)navigateToNextStressTestPage:(id)a0;
- (void)readSession:(id)a0;

@end
