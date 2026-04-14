@interface MXUtilities : NSObject

+ (id)osVersion;
+ (id)modelIdentifier;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)containerPath;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;
+ (id)getServicesDateFormatter;

@end
