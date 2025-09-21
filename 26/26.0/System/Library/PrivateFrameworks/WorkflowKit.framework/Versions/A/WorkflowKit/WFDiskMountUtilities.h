@interface WFDiskMountUtilities : NSObject

+ (BOOL)isExternalDeviceWithDiskInfo:(id)a0 useDADiskKeys:(BOOL)a1;
+ (id)mountPathForDiskWithBSDName:(id)a0 session:(struct __DASession { } *)a1;
+ (id)wholeDiskNameFromDiskInfo:(id)a0;

@end
