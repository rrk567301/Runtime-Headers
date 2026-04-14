@interface MXSourceUtilities : NSObject

+ (id)userNameFromUID:(unsigned int)a0;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (BOOL)anyClientsAvailable;
+ (id)codeSigningIDforBundleURL:(id)a0;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;

@end
