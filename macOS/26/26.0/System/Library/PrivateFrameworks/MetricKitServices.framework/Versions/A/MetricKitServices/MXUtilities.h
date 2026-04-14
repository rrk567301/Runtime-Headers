@interface MXUtilities : NSObject

+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)osVersion;
+ (id)modelIdentifier;
+ (id)containerPath;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;
+ (id)getServicesDateFormatter;

@end
