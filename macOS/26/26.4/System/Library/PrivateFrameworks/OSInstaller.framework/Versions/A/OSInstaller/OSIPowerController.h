@protocol OSIPowerControllerDelegate;

@interface OSIPowerController : NSObject

@property BOOL machineHasBattery;
@property BOOL machineIsPluggedIn;
@property BOOL machineIsLowOnPower;
@property BOOL machineIsCriticallyLowOnPower;
@property unsigned int systemSleepAssertion;
@property unsigned int displaySleepAssertion;
@property unsigned int softwareUpdateAssertion;
@property BOOL previouslyReleasedSleepAssertion;
@property struct __CFRunLoopSource { } *powerSourceRef;
@property struct __CFRunLoop { } *powerSourceRunloop;
@property BOOL lowBatteryTestMode;
@property id<OSIPowerControllerDelegate> delegate;

- (void)_updateState;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)_cacheMachineProperties;
- (void)_startLowBatteryTestMode;
- (void)disableSystemSleep;
- (void)enableSystemSleep;

@end
