@interface MXUtilities : NSObject

+ (id)modelIdentifier;
+ (id)osVersion;
+ (id)containerPath;
+ (char)isAppAnalyticsEnabled;
+ (id)platformArchitecture;
+ (id)regionFormat;
+ (char)isAppInstalledForBundleID:(id)a0;
+ (char)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;

@end
