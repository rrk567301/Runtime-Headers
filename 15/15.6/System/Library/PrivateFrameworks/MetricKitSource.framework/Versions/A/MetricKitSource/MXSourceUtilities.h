@interface MXSourceUtilities : NSObject

+ (id)userNameFromUID:(unsigned int)a0;
+ (char)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (char)anyClientsAvailable;
+ (id)codeSigningIDforBundleURL:(id)a0;
+ (id)getSignpostDataforPid:(int)a0 forClient:(id)a1 andEventTimestamp:(id)a2;
+ (char)isMetricKitClient:(id)a0;
+ (char)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;

@end
