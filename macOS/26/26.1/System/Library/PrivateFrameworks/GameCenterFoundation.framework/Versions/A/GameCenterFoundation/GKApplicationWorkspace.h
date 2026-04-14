@interface GKApplicationWorkspace : NSObject

+ (long long)getPlatformForBundleID:(id)a0;
+ (id)defaultWorkspace;

- (void)openSoftwareUpdateSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openNewsApp;
- (void)openICloudSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (short)openURLForArg:(id)a0 path:(id)a1;

@end
