@interface _PASDeviceState : NSObject

+ (void)setDefaultSystemCallbacks;
+ (BOOL)isClassCLocked;
+ (id)registerForLockStateChangeForDeviceNotifications:(id /* block */)a0;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (BOOL)isUnlocked;
+ (int)lockState;
+ (void *)registerForAKSEventsNotifications:(id /* block */)a0;
+ (id)currentOsBuild;
+ (void)unregisterForLockStateChangeforDeviceNotifications:(id)a0;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; } *)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (BOOL)isDeviceUnlocked;
+ (BOOL)isDeviceFormattedForProtectionForDevice;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (void)unregisterForAKSEventsNotifications:(void *)a0;
+ (int)deviceLockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;

@end
