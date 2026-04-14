@interface DMCMobileGestalt : NSObject

+ (id)diskUsage;
+ (id)productName;
+ (id)serialNumber;
+ (id)diskCapacity;
+ (id)deviceClass;
+ (id)productType;
+ (id)buildVersion;
+ (id)modelNumber;
+ (id)deviceColor;
+ (BOOL)isWatch;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;
+ (id)regionCode;
+ (id)regionInfo;
+ (BOOL)isPhone;
+ (BOOL)isPad;
+ (id)deviceUDID;
+ (id)availableCapacity;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)hasTelephonyCapability;
+ (id)supplementalBuildVersion;
+ (id)_overridableGestaltForKey:(const struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
