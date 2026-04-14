@interface OBBundleManager : NSObject

+ (id)sharedManager;

- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)_bundleSearchPath;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;

@end
