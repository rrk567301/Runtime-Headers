@interface DEDUtils : NSObject

+ (id)deviceModel;
+ (id)deviceColor;
+ (id)deviceClass;
+ (BOOL)isDataClassBAvailable;
+ (id)uniqueDeviceSpecifier;
+ (id)unauthenticatedDeviceSpecifierFormResponseID:(long long)a0 device:(id)a1;
+ (id)platform;
+ (long long)deviceType;
+ (id)modelForProductType:(id)a0;
+ (id)deviceSerialNumber;
+ (id)checkDefaultsForOverride:(id)a0;
+ (id)osBuild;
+ (id)deviceEnclosureColor;
+ (BOOL)isDebugRequestsEnabled;
+ (BOOL)isInternalInstall;
+ (id)deviceClassForProductType:(id)a0;
+ (int)deviceHomeButtonType;
+ (id)deviceName;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)deviceProductType;
+ (id)deviceUniformTypeIdentifier;
+ (id)sharedLog;
+ (id)deviceHardwareCodename;

@end
