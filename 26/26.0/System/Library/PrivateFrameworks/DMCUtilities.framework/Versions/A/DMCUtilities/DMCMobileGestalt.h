@interface DMCMobileGestalt : NSObject

+ (id)deviceColor;
+ (id)deviceUDID;
+ (id)buildVersion;
+ (BOOL)isPad;
+ (BOOL)isPhone;
+ (id)productName;
+ (BOOL)hasTelephonyCapability;
+ (id)deviceClass;
+ (id)productType;
+ (id)modelNumber;
+ (id)regionCode;
+ (id)serialNumber;
+ (BOOL)isWatch;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)isAppleTV;
+ (id)regionInfo;
+ (BOOL)isHomePod;
+ (id)chipID;
+ (id)diskCapacity;
+ (id)diskUsage;
+ (BOOL)hasBattery;
+ (id)availableCapacity;
+ (id)supplementalBuildVersion;
+ (BOOL)isAppleSiliconMac;
+ (BOOL)hasBatteryInformationCapability;
+ (id)_overridableGestaltForKey:(struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (BOOL)isVisionDevice;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
