@interface _PASDeviceStateStub : _PASDeviceState

+ (void)startMockingSystem;
+ (void)setLockState:(int)a0;
+ (void)setCurrentOsBuild:(id)a0;
+ (void)setClassCLocked:(BOOL)a0;
+ (void)stopMockingSystem;
+ (void)setLockStateAKS:(int)a0;
+ (void)setDeviceFormattedForProtection:(BOOL)a0;

@end
