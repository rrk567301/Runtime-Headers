@interface MXUtilities : NSObject

+ (id)osVersion;
+ (id)modelIdentifier;
+ (id)regionFormat;
+ (id)containerPath;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;

@end
