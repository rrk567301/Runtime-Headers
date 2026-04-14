@interface MXSourceUtilities : NSObject

+ (id)userNameFromUID:(unsigned int)a0;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)codeSigningIDforBundleURL:(id)a0;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)anyClientsAvailable;

@end
