@interface EOSDeviceHost : NSObject

+ (BOOL)currentHardwareHasEmbeddedDevice;
+ (BOOL)embeddedDeviceIsBooted;
+ (BOOL)embeddedDeviceIsUnresponsive;
+ (BOOL)forceDFU;
+ (BOOL)forceReset;
+ (BOOL)forceResetAndWaitForRecoveryModeDevice;
+ (BOOL)mesaEnrollmentInProgress;
+ (void)setHealed:(BOOL)a0;

@end
