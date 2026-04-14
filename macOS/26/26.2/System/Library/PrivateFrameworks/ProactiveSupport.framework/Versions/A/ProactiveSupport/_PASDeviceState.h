@interface _PASDeviceState : NSObject

+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (int)lockState;
+ (BOOL)isDeviceUnlocked;
+ (void)unregisterForLockStateChangeforDeviceNotifications:(id)a0;
+ (BOOL)isUnlocked;
+ (void)unregisterForAKSEventsNotifications:(void *)a0;
+ (BOOL)isDeviceFormattedForProtectionForDevice;
+ (id)registerForLockStateChangeForDeviceNotifications:(id /* block */)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (int)deviceLockState;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; } *)a0;
+ (BOOL)isClassCLocked;
+ (void *)registerForAKSEventsNotifications:(id /* block */)a0;
+ (void)setDefaultSystemCallbacks;
+ (id)currentOsBuild;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;

@end
