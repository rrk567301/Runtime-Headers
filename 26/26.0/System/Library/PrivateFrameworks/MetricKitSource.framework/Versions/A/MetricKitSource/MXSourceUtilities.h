@interface MXSourceUtilities : NSObject

+ (BOOL)isAppAnalyticsEnabled;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (id)regionFormat;
+ (id)getSignpostDataforPid:(int)a0 forClient:(id)a1 andEventTimestamp:(id)a2;
+ (BOOL)anyClientsAvailableForUid:(unsigned int)a0;
+ (BOOL)anyClientsAvailable;
+ (id)codeSigningIDforBundleURL:(id)a0;
+ (id)userNameFromUID:(unsigned int)a0;
+ (BOOL)isMetricKitClient:(id)a0;

@end
