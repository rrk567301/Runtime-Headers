@interface EOSDeviceHost : NSObject

+ (BOOL)currentHardwareHasEmbeddedDevice;
+ (BOOL)embeddedDeviceIsBooted;
+ (BOOL)embeddedDeviceIsUnresponsive;
+ (BOOL)forceDFU;
+ (BOOL)forceReset;
+ (BOOL)forceResetAndWaitForRecoveryModeDevice;
+ (void)setHealed:(BOOL)a0;
+ (BOOL)mesaEnrollmentInProgress;

@end
