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
+ (id)modelForProductType:(id)a0;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceHardwareCodename;
+ (int)deviceHomeButtonType;
+ (id)deviceUniformTypeIdentifier;
+ (BOOL)isDebugRequestsEnabled;
+ (BOOL)isDataClassBAvailable;

@end
