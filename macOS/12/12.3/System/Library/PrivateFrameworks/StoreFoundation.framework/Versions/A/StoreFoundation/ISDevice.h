@interface ISDevice : NSObject

+ (id)guid;
+ (BOOL)isTouchIDCapable;
+ (long long)availableDiskSpace;
+ (id)eosDeviceType;
+ (long long)availableSpaceOnDiskAtPath:(id)a0;
+ (void)osVersionReturningMajor:(int *)a0 minor:(int *)a1 point:(int *)a2;
+ (id)osMajorVersionString;
+ (BOOL)isBootedFromRecoveryPartition;
+ (BOOL)hasTouchIDAndEnrolled;

@end
