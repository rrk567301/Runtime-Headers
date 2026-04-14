@interface OBBundleManager : NSObject

+ (id)sharedManager;

- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;
- (id)_bundleSearchPath;
- (id)_providersByBundleNames;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)bundlesWithIdentifiers:(id)a0;

@end
