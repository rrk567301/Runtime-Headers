@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;
- (id)_bundleSearchPath;
- (id)_providersByBundleNames;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3;
- (id)privacyLinkBundleForBundles:(id)a0;

@end
