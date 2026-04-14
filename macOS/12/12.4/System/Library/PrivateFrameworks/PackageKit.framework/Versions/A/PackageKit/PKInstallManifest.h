@class PKInstallRequest, NSArray, NSSet, PKInstallAnalyzer;

@interface PKInstallManifest : NSObject {
    PKInstallRequest *_installRequest;
    PKInstallAnalyzer *_installAnalyzer;
    NSArray *_actualInstallPathsForSystemContent;
    NSSet *_actualInstallPathsTargetingReadOnlySystemLocations;
}

- (void)dealloc;
- (id)bundleIdentifiers;
- (id)initWithInstallRequest:(id)a0;
- (id)topBundleIdentifiers;
- (id)defaultInstallPathForBundleIdentifier:(id)a0;
- (id)actualInstallPathForBundleIdentifier:(id)a0;
- (id)installedVersionForBundleIdentifier:(id)a0;
- (id)downgradePathForBundleIdentifier:(id)a0;
- (id)actualFileInstallPathsViolatingReadOnlySystemLocationsEvaluatingDestinationPath:(BOOL)a0;
- (id)actualInstallPathsForSystemContent;
- (int)_isCompatibleWithMDMAppManagementWithReason;
- (BOOL)_isCompatibleWithMDMAppManagement;
- (BOOL)_isCompatibleWithMDMAppManagementReturningError:(id *)a0;

@end
