@class NSString, NSTimer, NSCondition, NSLock;

@interface Watchdog : NSObject {
    BOOL shouldStop;
    double watchdogInterval;
    NSTimer *watchdogTimer;
    NSTimer *unresponsiveWebProcessTimer;
    NSString *unresponsiveProcess;
    NSTimer *profilerTimer;
    NSCondition *watchdogCondition;
    NSLock *samplingLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)checkIn;
- (void)finishProfiling;
- (void)webProcessDidBecomeUnresponsive;
- (void)setWatchdogInterval:(double)a0;
- (void)terminateUnresponsiveProcess;
- (void)clearProfilerTimer;
- (void)handleWebProcessHang;
- (void)clearUnresponsiveWebProcessTimer;
- (BOOL)handleHang;
- (void)handleSafariHang;
- (void)runWatchdog;
- (id)sampleOutput;
- (double)watchdogInterval;

@end
