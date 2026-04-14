@interface C2DeviceInfo : NSObject

+ (id)testName;
+ (id)buildVersion;
+ (id)productName;
+ (id)processVersion;
+ (id)productType;
+ (id)productVersion;
+ (id)processName;
+ (id)processUUID;
+ (BOOL)isAppleInternal;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;

@end
