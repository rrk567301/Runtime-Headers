@interface C2DeviceInfo : NSObject

+ (id)productVersion;
+ (id)productName;
+ (id)testName;
+ (id)productType;
+ (id)buildVersion;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;
+ (BOOL)isAppleInternal;
+ (id)processUUID;
+ (id)processName;
+ (id)processVersion;

@end
