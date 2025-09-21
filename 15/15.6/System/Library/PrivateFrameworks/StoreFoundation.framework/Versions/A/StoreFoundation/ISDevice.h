@interface ISDevice : NSObject

+ (id)guid;
+ (char)isTouchIDCapable;
+ (id)eosDeviceType;
+ (long long)availableDiskSpace;
+ (long long)availableSpaceOnDiskAtPath:(id)a0;
+ (char)hasTouchIDAndEnrolled;
+ (char)isBootedFromRecoveryPartition;
+ (id)osMajorVersionString;
+ (void)osVersionReturningMajor:(int *)a0 minor:(int *)a1 point:(int *)a2;

@end
