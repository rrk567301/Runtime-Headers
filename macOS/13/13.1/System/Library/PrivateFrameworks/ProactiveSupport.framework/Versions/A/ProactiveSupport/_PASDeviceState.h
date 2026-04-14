@interface _PASDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)a0;
+ (void)setDefaultSystemCallbacks;
+ (BOOL)isClassCLocked;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;

@end
