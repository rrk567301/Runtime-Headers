@interface C2DeviceInfo : NSObject

+ (id)productVersion;
+ (id)productName;
+ (id)processUUID;
+ (BOOL)isAppleInternal;
+ (id)productType;
+ (id)buildVersion;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;
+ (id)processVersion;
+ (id)testName;
+ (id)processName;

@end
