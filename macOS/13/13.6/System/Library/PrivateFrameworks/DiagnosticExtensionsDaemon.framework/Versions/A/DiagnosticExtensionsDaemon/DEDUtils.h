@interface DEDUtils : NSObject

+ (id)platform;
+ (id)deviceName;
+ (id)osBuild;
+ (id)deviceClass;
+ (BOOL)isInternalInstall;
+ (id)deviceModel;
+ (id)deviceColor;
+ (id)deviceEnclosureColor;
+ (id)deviceProductType;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceSerialNumber;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)deviceHardwareCodename;
+ (int)deviceHomeButtonType;
+ (id)deviceUniformTypeIdentifier;
+ (BOOL)isDataClassBAvailable;
+ (BOOL)isDebugRequestsEnabled;
+ (id)modelForProductType:(id)a0;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;

@end
