@interface C2DeviceInfo : NSObject

+ (char)isAppleInternal;
+ (id)productName;
+ (id)processName;
+ (id)productVersion;
+ (id)productType;
+ (id)processUUID;
+ (id)buildVersion;
+ (id)processVersion;
+ (id)testName;
+ (char)whitelistedForDisableAPWakeOnIdleConnections;

@end
