@interface ISDevice : NSObject

+ (id)guid;
+ (BOOL)isTouchIDCapable;
+ (long long)availableDiskSpace;
+ (id)eosDeviceType;
+ (long long)availableSpaceOnDiskAtPath:(id)a0;
+ (BOOL)hasTouchIDAndEnrolled;
+ (BOOL)isBootedFromRecoveryPartition;
+ (id)osMajorVersionString;
+ (void)osVersionReturningMajor:(int *)a0 minor:(int *)a1 point:(int *)a2;

@end
