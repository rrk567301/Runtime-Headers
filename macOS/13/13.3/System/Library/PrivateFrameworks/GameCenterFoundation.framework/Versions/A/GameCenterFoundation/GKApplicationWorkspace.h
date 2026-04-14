@interface GKApplicationWorkspace : NSObject

+ (id)defaultWorkspace;
+ (long long)getPlatformForBundleID:(id)a0;

- (BOOL)applicationIsInstalled:(id)a0;
- (void)openURL:(id)a0;
- (void)launchApplication:(id)a0;
- (void)openGameCenterSettings;
- (void)openICloudSettings;
- (void)openSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;

@end
