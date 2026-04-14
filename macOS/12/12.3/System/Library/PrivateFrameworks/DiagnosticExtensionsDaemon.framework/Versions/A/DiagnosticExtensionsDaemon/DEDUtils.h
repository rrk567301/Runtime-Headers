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
+ (id)deviceSerialNumber;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceUniformTypeIdentifier;
+ (id)deviceClassForProductType:(id)a0;
+ (id)modelForProductType:(id)a0;
+ (id)deviceHardwareCodename;
+ (BOOL)isDebugRequestsEnabled;
+ (int)deviceHomeButtonType;

@end
