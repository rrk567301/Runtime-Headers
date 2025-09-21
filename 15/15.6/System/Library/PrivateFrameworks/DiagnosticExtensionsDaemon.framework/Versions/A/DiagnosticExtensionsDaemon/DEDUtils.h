@interface DEDUtils : NSObject

+ (id)platform;
+ (id)deviceName;
+ (id)osBuild;
+ (id)deviceClass;
+ (char)isInternalInstall;
+ (id)deviceModel;
+ (id)deviceColor;
+ (id)deviceEnclosureColor;
+ (id)deviceProductType;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceSerialNumber;
+ (int)deviceHomeButtonType;
+ (id)checkDefaultsForOverride:(id)a0;
+ (id)deviceHardwareCodename;
+ (id)deviceUniformTypeIdentifier;
+ (char)isDataClassBAvailable;
+ (char)isDebugRequestsEnabled;
+ (id)modelForProductType:(id)a0;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;

@end
