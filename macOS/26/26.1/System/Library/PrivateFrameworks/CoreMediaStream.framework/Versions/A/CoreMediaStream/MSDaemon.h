@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (BOOL)isBusy;
- (void)retainUIBusy;
- (void)releaseBusy;
- (void)didUnidle;
- (void)releasePowerAssertion;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void).cxx_destruct;
- (void)didIdle;
- (id)init;
- (void)retainPowerAssertion;
- (void)_didChangeIdleBusyState:(BOOL)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
