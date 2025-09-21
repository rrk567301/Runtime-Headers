@interface MIS : NSObject

+ (char)isAvailable;
+ (char)installProvisioningProfile:(id)a0;
+ (id)currentDeviceID;
+ (id)findProvisioningProfile:(id)a0;
+ (char)isProvisioningProfileTrusted:(id)a0;
+ (char)isProvisioningProfileValid:(id)a0;
+ (char)isProvisioningProfileValid:(id)a0 forDevice:(id)a1;
+ (char)isValidApplication:(id)a0 checkResources:(char)a1 withSignerCategory:(unsigned long long *)a2 withModified:(char *)a3 withProgressCallback:(id /* block */)a4;
+ (char)uninstallProvisioningProfile:(id)a0;

@end
