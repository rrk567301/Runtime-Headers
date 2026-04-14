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

- (double)upTime;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)start;
- (void)dealloc;
- (unsigned long long)pageCount;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isStressTestRunning;
- (void)loadWillFail;
- (void)navigateToNextStressTestPage:(id)a0;
- (void)pageLoadFinishedWithURL:(id)a0;
- (void)pageLoadStartedWithURL:(id)a0;
- (void)readSession:(id)a0;
- (void)replaySession:(id)a0;
- (void)validateStressTest;
- (void)validatedStart;
- (unsigned long long)webProcessCrashCount;
- (void)webProcessDidCrash;
- (double)webProcessUpTime;

@end
