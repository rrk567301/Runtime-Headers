@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isBusy;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)retainBusy;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)didIdle;
- (void)didUnidle;
- (void)_didChangeIdleBusyState:(BOOL)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
