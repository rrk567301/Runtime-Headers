@interface DMCMobileGestalt : NSObject

+ (BOOL)isPad;
+ (id)deviceClass;
+ (BOOL)isAppleTV;
+ (id)buildVersion;
+ (id)productType;
+ (id)productName;
+ (id)regionCode;
+ (BOOL)hasTelephonyCapability;
+ (id)deviceColor;
+ (BOOL)hasCellularDataCapability;
+ (id)chipID;
+ (id)serialNumber;
+ (BOOL)isHomePod;
+ (id)deviceUDID;
+ (id)diskCapacity;
+ (id)regionInfo;
+ (BOOL)isPhone;
+ (id)modelNumber;
+ (BOOL)isWatch;
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
