@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (void)retainBusy;
- (BOOL)isBusy;
- (id)init;
- (void)didUnidle;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)didIdle;
- (void).cxx_destruct;
- (void)releaseUIBusy;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)_didChangeIdleBusyState:(BOOL)a0;
- (void)_hysteresisTimerDidFire:(id)a0;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
