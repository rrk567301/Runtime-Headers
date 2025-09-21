@interface GKApplicationWorkspace : NSObject

+ (id)defaultWorkspace;
+ (long long)getPlatformForBundleID:(id)a0;

- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (short)openURLForArg:(id)a0 path:(id)a1;
- (void)openSoftwareUpdateSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openICloudSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (void)openNewsApp;

@end
