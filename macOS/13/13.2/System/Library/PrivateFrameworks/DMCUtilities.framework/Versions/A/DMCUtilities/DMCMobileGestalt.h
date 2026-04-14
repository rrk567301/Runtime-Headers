@interface DMCMobileGestalt : NSObject

+ (id)diskUsage;
+ (id)productName;
+ (id)serialNumber;
+ (id)diskCapacity;
+ (id)productType;
+ (id)deviceClass;
+ (id)buildVersion;
+ (id)modelNumber;
+ (id)deviceColor;
+ (BOOL)isWatch;
+ (BOOL)isHomePod;
+ (BOOL)isAppleTV;
+ (id)regionCode;
+ (BOOL)isPhone;
+ (id)deviceUDID;
+ (id)availableCapacity;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)isPad;
+ (id)supplementalBuildVersion;
+ (id)_overridableGestaltForKey:(const struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersionExtra;
+ (id)supplementalMarketingVersion;
+ (id)deviceCapacity;

@end
