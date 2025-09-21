@interface POBaseSystemSupport : NSObject

+ (void)enterSandbox:(const char *)a0 sandboxProfileName:(const char *)a1;
+ (char)fvunlockMode;
+ (id)getSystemVolumeUuid;
+ (char)isUserInBackoff:(id)a0;
+ (id)prebootVolumePathForUUID:(id)a0 shouldUnmount:(char *)a1;
+ (id)systemVolumeDiskIdentifierForVolumeGroupIdentifier:(id)a0;

@end
