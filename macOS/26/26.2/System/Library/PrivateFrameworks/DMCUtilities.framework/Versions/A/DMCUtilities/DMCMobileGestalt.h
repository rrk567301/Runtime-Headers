@interface DMCMobileGestalt : NSObject

+ (BOOL)isHomePod;
+ (BOOL)isWatch;
+ (BOOL)isPad;
+ (BOOL)isAppleTV;
+ (id)deviceUDID;
+ (id)deviceColor;
+ (id)productName;
+ (id)deviceClass;
+ (id)modelNumber;
+ (id)regionCode;
+ (id)productType;
+ (id)buildVersion;
+ (id)serialNumber;
+ (id)regionInfo;
+ (BOOL)hasCellularDataCapability;
+ (id)chipID;
+ (BOOL)isPhone;
+ (id)diskCapacity;
+ (BOOL)hasTelephonyCapability;
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
