@interface HMDDeviceLockStateDataSource : HMFObject

@property (readonly) char isLocked;
@property (readonly) char isPasscodeEnabled;
@property (readonly) char isUnlockedWithAutoLoginOrAutoLockDisabled;

@end
