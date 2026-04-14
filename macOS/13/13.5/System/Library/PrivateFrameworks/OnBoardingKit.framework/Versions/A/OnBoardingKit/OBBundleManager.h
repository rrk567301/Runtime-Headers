@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;
- (id)_allPrivacyBundles;
- (id)_bundleSearchPath;
- (id)_providersByBundleNames;
- (id)bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)privacyLinkBundleForBundles:(id)a0;

@end
