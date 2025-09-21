@interface DMCMobileGestalt : NSObject

+ (id)regionCode;
+ (id)diskUsage;
+ (id)productName;
+ (id)serialNumber;
+ (id)diskCapacity;
+ (id)deviceClass;
+ (id)productType;
+ (id)buildVersion;
+ (id)modelNumber;
+ (id)deviceColor;
+ (char)hasBattery;
+ (char)isWatch;
+ (char)isAppleTV;
+ (char)isHomePod;
+ (id)regionInfo;
+ (char)isPhone;
+ (char)isPad;
+ (id)chipID;
+ (id)deviceUDID;
+ (id)availableCapacity;
+ (char)hasCellularDataCapability;
+ (char)hasTelephonyCapability;
+ (id)supplementalBuildVersion;
+ (char)isAppleSiliconMac;
+ (char)hasBatteryInformationCapability;
+ (id)_overridableGestaltForKey:(struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)deviceCapacity;
+ (char)hasInternetTetheringCapability;
+ (char)isVisionDevice;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
