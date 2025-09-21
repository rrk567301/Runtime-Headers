@class PKInstallRequest, NSArray, NSSet, PKInstallAnalyzer;

@interface PKInstallManifest : NSObject {
    PKInstallRequest *_installRequest;
    PKInstallAnalyzer *_installAnalyzer;
    NSArray *_actualInstallPathsForSystemContent;
    NSSet *_actualInstallPathsTargetingReadOnlySystemLocations;
}

- (void)dealloc;
- (id)bundleIdentifiers;
- (char)_isCompatibleWithMDMAppManagement;
- (char)_isCompatibleWithMDMAppManagementReturningError:(id *)a0;
- (int)_isCompatibleWithMDMAppManagementWithReason;
- (id)actualFileInstallPathsViolatingReadOnlySystemLocationsEvaluatingDestinationPath:(char)a0;
- (id)actualInstallPathForBundleIdentifier:(id)a0;
- (id)actualInstallPathsForSystemContent;
- (id)defaultInstallPathForBundleIdentifier:(id)a0;
- (id)downgradePathForBundleIdentifier:(id)a0;
- (id)initWithInstallRequest:(id)a0;
- (id)installedVersionForBundleIdentifier:(id)a0;
- (id)topBundleIdentifiers;

@end
