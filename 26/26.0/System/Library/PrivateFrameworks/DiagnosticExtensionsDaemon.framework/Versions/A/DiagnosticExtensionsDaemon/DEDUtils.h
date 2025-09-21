@interface DEDUtils : NSObject

+ (id)deviceColor;
+ (id)deviceClass;
+ (id)deviceEnclosureColor;
+ (id)deviceName;
+ (id)deviceModel;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (long long)deviceType;
+ (id)deviceProductType;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceClassForProductType:(id)a0;
+ (id)unauthenticatedDeviceSpecifierFormResponseID:(long long)a0 device:(id)a1;
+ (id)deviceHardwareCodename;
+ (BOOL)isInternalInstall;
+ (id)osBuild;
+ (int)deviceHomeButtonType;
+ (id)checkDefaultsForOverride:(id)a0;
+ (BOOL)isDataClassBAvailable;
+ (id)platform;
+ (id)deviceSerialNumber;
+ (id)deviceUniformTypeIdentifier;
+ (id)modelForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;

@end
