@interface DEDUtils : NSObject

+ (id)osBuild;
+ (id)deviceClass;
+ (id)deviceModel;
+ (BOOL)isInternalInstall;
+ (id)deviceEnclosureColor;
+ (int)deviceHomeButtonType;
+ (long long)deviceType;
+ (id)deviceProductType;
+ (id)deviceName;
+ (id)checkDefaultsForOverride:(id)a0;
+ (BOOL)isDataClassBAvailable;
+ (id)uniqueDeviceSpecifier;
+ (id)platform;
+ (id)unauthenticatedDeviceSpecifierFormResponseID:(long long)a0 device:(id)a1;
+ (id)deviceColor;
+ (id)deviceSerialNumber;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceUniformTypeIdentifier;
+ (id)sharedLog;
+ (id)deviceHardwareCodename;
+ (id)modelForProductType:(id)a0;

@end
