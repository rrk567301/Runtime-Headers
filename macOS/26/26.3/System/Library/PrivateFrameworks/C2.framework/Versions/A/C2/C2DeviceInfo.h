@interface C2DeviceInfo : NSObject

+ (id)productType;
+ (id)productVersion;
+ (BOOL)isAppleInternal;
+ (id)buildVersion;
+ (id)productName;
+ (id)processVersion;
+ (id)testName;
+ (id)processName;
+ (id)processUUID;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;

@end
