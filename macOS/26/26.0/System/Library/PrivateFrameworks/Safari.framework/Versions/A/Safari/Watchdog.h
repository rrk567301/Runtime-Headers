@class NSString, NSTimer, NSCondition, NSLock;

@interface Watchdog : NSObject {
    BOOL shouldStop;
    double watchdogInterval;
    NSTimer *watchdogTimer;
    NSTimer *unresponsiveWebProcessTimer;
    NSString *unresponsiveProcess;
    NSCondition *watchdogCondition;
    NSLock *samplingLock;
}

- (void)checkIn;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)webProcessDidBecomeUnresponsive;
- (void)clearUnresponsiveWebProcessTimer;
- (BOOL)handleHang;
- (void)handleSafariHang;
- (void)handleWebProcessHang;
- (void)runWatchdog;
- (id)sampleOutput;
- (void)setWatchdogInterval:(double)a0;
- (void)terminateUnresponsiveProcess;
- (double)watchdogInterval;

@end
