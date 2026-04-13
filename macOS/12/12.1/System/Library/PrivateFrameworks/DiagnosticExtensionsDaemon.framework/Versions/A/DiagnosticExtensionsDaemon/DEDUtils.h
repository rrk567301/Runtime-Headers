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
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceClassForProductType:(id)a0;
+ (id)modelForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;

@end
