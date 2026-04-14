@interface MXUtilities : NSObject

+ (id)osVersion;
+ (id)modelIdentifier;
+ (id)containerPath;
+ (id)regionFormat;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;
+ (id)getServicesDateFormatter;

@end
