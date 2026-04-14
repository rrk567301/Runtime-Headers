@interface GKApplicationWorkspace : NSObject

+ (long long)getPlatformForBundleID:(id)a0;
+ (id)defaultWorkspace;

- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openSoftwareUpdateSettings;
- (void)openNewsApp;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (short)openURLForArg:(id)a0 path:(id)a1;
- (void)openICloudSettings;

@end
