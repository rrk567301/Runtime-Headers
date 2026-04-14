@interface _PASDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (id)registerForLockStateChangeForDeviceNotifications:(id /* block */)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (id)currentOsBuild;
+ (BOOL)isClassCLocked;
+ (BOOL)isDeviceUnlocked;
+ (void)unregisterForLockStateChangeforDeviceNotifications:(id)a0;
+ (void)unregisterForAKSEventsNotifications:(void *)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (int)deviceLockState;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (BOOL)isDeviceFormattedForProtectionForDevice;
+ (void)setDefaultSystemCallbacks;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; } *)a0;
+ (void *)registerForAKSEventsNotifications:(id /* block */)a0;

@end
