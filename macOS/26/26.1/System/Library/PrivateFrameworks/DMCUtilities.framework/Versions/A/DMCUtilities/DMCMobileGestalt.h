@interface DMCMobileGestalt : NSObject

+ (id)deviceClass;
+ (BOOL)isWatch;
+ (BOOL)isPad;
+ (id)modelNumber;
+ (id)productName;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)isPhone;
+ (id)productType;
+ (BOOL)isAppleTV;
+ (id)serialNumber;
+ (id)chipID;
+ (id)buildVersion;
+ (id)regionCode;
+ (id)regionInfo;
+ (id)diskCapacity;
+ (BOOL)isHomePod;
+ (id)deviceColor;
+ (id)deviceUDID;
+ (BOOL)hasCellularDataCapability;
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
