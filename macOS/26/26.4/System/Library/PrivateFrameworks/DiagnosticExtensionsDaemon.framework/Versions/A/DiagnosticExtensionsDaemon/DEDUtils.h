@interface DEDUtils : NSObject

+ (id)deviceClass;
+ (id)platform;
+ (id)deviceModel;
+ (BOOL)isDebugRequestsEnabled;
+ (BOOL)isInternalInstall;
+ (id)modelForProductType:(id)a0;
+ (id)deviceName;
+ (id)deviceEnclosureColor;
+ (id)checkDefaultsForOverride:(id)a0;
+ (id)deviceColor;
+ (long long)deviceType;
+ (id)deviceClassForProductType:(id)a0;
+ (id)unauthenticatedDeviceSpecifierFormResponseID:(long long)a0 device:(id)a1;
+ (id)uniqueDeviceSpecifier;
+ (int)deviceHomeButtonType;
+ (id)deviceUniformTypeIdentifier;
+ (id)deviceHardwareCodename;
+ (BOOL)isDataClassBAvailable;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)deviceSerialNumber;
+ (id)deviceProductType;
+ (id)osBuild;
+ (id)sharedLog;

@end
