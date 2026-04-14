@interface MXUtilities : NSObject

+ (id)containerPath;
+ (id)osVersion;
+ (id)regionFormat;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)modelIdentifier;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;
+ (id)getServicesDateFormatter;

@end
