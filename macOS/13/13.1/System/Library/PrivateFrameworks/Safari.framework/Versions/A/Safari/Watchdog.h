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
- (void)handleWebProcessHang;
- (void)handleSafariHang;
- (void)runWatchdog;
- (id)sampleOutput;
- (BOOL)handleHang;
- (void)terminateUnresponsiveProcess;
- (void)webProcessDidBecomeUnresponsive;
- (void)setWatchdogInterval:(double)a0;
- (double)watchdogInterval;
- (void)clearUnresponsiveWebProcessTimer;
- (void)clearProfilerTimer;

@end
