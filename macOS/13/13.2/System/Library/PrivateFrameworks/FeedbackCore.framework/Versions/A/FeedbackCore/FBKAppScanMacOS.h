@interface FBKAppScanMacOS : NSObject

+ (id)allInstalledApps;
+ (id)thirdPartyInstalledAppsFromAppsList:(id)a0;
+ (id)thirdPartyInstalledApps;
+ (id)_allAppURLs;
+ (id)denyListedApps;

@end
