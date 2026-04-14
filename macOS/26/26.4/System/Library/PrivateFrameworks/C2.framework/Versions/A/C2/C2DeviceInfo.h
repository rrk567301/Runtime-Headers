@interface C2DeviceInfo : NSObject

+ (id)buildVersion;
+ (id)testName;
+ (id)productType;
+ (id)processVersion;
+ (id)productVersion;
+ (id)productName;
+ (BOOL)isAppleInternal;
+ (id)processUUID;
+ (id)processName;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;

@end
