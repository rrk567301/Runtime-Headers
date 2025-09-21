@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) char stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (id)init;
- (void).cxx_destruct;
- (char)isBusy;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)releaseBusy;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)retainUIBusy;
- (void)didIdle;
- (void)_didChangeIdleBusyState:(char)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)didUnidle;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
