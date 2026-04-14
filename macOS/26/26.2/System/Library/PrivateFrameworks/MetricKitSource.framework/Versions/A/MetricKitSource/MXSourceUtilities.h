@interface MXSourceUtilities : NSObject

+ (id)getSignpostDataforPid:(int)a0 forClient:(id)a1 andEventTimestamp:(id)a2;
+ (id)codeSigningIDforBundleURL:(id)a0;
+ (id)regionFormat;
+ (BOOL)isAppAnalyticsEnabled;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (BOOL)anyClientsAvailableForUid:(unsigned int)a0;
+ (id)userNameFromUID:(unsigned int)a0;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)anyClientsAvailable;

@end
