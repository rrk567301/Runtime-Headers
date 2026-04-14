@interface MXSourceUtilities : NSObject

+ (BOOL)anyClientsAvailableForUid:(unsigned int)a0;
+ (id)getSignpostDataforPid:(int)a0 forClient:(id)a1 andEventTimestamp:(id)a2;
+ (BOOL)anyClientsAvailable;
+ (id)userNameFromUID:(unsigned int)a0;
+ (id)regionFormat;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)codeSigningIDforBundleURL:(id)a0;

@end
