@protocol OSIPowerControllerDelegate;

@interface OSIPowerController : NSObject

@property char machineHasBattery;
@property char machineIsPluggedIn;
@property char machineIsLowOnPower;
@property char machineIsCriticallyLowOnPower;
@property unsigned int systemSleepAssertion;
@property unsigned int displaySleepAssertion;
@property char previouslyReleasedSleepAssertion;
@property struct __CFRunLoopSource { } *powerSourceRef;
@property struct __CFRunLoop { } *powerSourceRunloop;
@property char lowBatteryTestMode;
@property id<OSIPowerControllerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_updateState;
- (void)_cacheMachineProperties;
- (void)_startLowBatteryTestMode;
- (void)disableSystemSleep;
- (void)enableSystemSleep;

@end
