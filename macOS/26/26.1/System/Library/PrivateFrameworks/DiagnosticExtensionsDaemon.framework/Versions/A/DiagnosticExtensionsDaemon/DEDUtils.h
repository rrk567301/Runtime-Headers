@interface DEDUtils : NSObject

+ (id)deviceClass;
+ (id)deviceEnclosureColor;
+ (id)deviceSerialNumber;
+ (id)deviceModel;
+ (id)deviceName;
+ (id)deviceUniformTypeIdentifier;
+ (long long)deviceType;
+ (BOOL)isInternalInstall;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)sharedLog;
+ (id)deviceHardwareCodename;
+ (id)platform;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceColor;
+ (id)unauthenticatedDeviceSpecifierFormResponseID:(long long)a0 device:(id)a1;
+ (BOOL)isDebugRequestsEnabled;
+ (int)deviceHomeButtonType;
+ (BOOL)isDataClassBAvailable;
+ (id)modelForProductType:(id)a0;
+ (id)checkDefaultsForOverride:(id)a0;
+ (id)deviceClassForProductType:(id)a0;
+ (id)osBuild;
+ (id)deviceProductType;

@end
