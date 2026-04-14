@interface MIS : NSObject

+ (BOOL)isAvailable;
+ (BOOL)installProvisioningProfile:(id)a0;
+ (id)currentDeviceID;
+ (BOOL)isProvisioningProfileValid:(id)a0 forDevice:(id)a1;
+ (id)findProvisioningProfile:(id)a0;
+ (BOOL)isProvisioningProfileValid:(id)a0;
+ (BOOL)isProvisioningProfileTrusted:(id)a0;
+ (BOOL)uninstallProvisioningProfile:(id)a0;
+ (BOOL)isValidApplication:(id)a0 checkResources:(BOOL)a1 withSignerCategory:(unsigned long long *)a2 withModified:(BOOL *)a3 withProgressCallback:(id /* block */)a4;

@end
