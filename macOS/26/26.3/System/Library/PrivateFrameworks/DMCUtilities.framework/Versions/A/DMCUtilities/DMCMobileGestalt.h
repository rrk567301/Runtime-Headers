@interface DMCMobileGestalt : NSObject

+ (id)modelNumber;
+ (id)productType;
+ (id)deviceClass;
+ (id)buildVersion;
+ (id)productName;
+ (id)serialNumber;
+ (id)regionCode;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)isAppleTV;
+ (id)deviceColor;
+ (BOOL)isPad;
+ (id)deviceUDID;
+ (BOOL)isHomePod;
+ (BOOL)isWatch;
+ (id)diskCapacity;
+ (id)regionInfo;
+ (BOOL)isPhone;
+ (id)chipID;
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
