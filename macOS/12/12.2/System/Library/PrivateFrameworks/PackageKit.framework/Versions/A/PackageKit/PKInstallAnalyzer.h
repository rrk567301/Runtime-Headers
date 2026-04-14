@class PKInstallRequest, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray;

@interface PKInstallAnalyzer : NSObject {
    PKInstallRequest *_installRequest;
    NSMutableDictionary *_maskPathsByPackageSpecifier;
    NSMutableDictionary *_skipComponentsByPackageSpecifier;
    NSMutableSet *_obsoletedFiles;
    NSMutableSet *_potentiallyObsoleteDirectories;
    NSMutableSet *_atomicallyObsoleteBundles;
    NSMutableSet *_truncateBeforeObsoletingFiles;
    NSMutableArray *_deferredInstallPaths;
    NSMutableArray *_registrationPaths;
    NSMutableArray *_contentCachingPaths;
    NSMutableArray *_pathsToCambriaTranslate;
    long long _kextPathCount;
    long long _systemLibraryCount;
    long long _prebootFilesCount;
    long long _xpcCachePathCount;
    NSDictionary *_bundlePathToComponentMap;
    NSMutableDictionary *_bundleIdentToXATTRMap;
    NSMutableDictionary *_defaultPathByBundleIdentifier;
    NSMutableDictionary *_actualPathByBundleIdentifier;
    NSMutableDictionary *_versionByBundleIdentifier;
    NSMutableDictionary *_downgradePathByBundleIdentifier;
    NSMutableArray *_topBundleIdentifiers;
    NSMutableArray *_actualFileInstallPaths;
}

@property (readonly) BOOL includesAppleInternalRootContent;

- (void)dealloc;
- (id)initWithInstallRequest:(id)a0;
- (id)actualFileInstallPathsViolatingReadOnlySystemLocationsEvaluatingDestinationPath:(BOOL)a0;
- (id)bundlePathsForRegistration;
- (id)initWithInstallRequest:(id)a0 includeObsoletion:(BOOL)a1;
- (void)_analyzeIncludingObsoletion:(BOOL)a0;
- (void)_sanitizePackageDataForRequest;
- (id)_buildBundlePathToComponentMapForRequest;
- (void)_findDeferredInstallPathsForPackageSpecifier:(id)a0;
- (void)_findMaskPathsAndSkipComponentsForPackageSpecifier:(id)a0;
- (void)_findObsoleteOnDiskFilesForPackageSpecifier:(id)a0;
- (void)_findRegistrationPathsForPackageSpecifier:(id)a0;
- (void)_findCambriaTranslationPathsForPackageSpecifier:(id)a0;
- (void)_computeManifestForSpecifier:(id)a0;
- (id)skipComponentsForPackageSpecifier:(id)a0;
- (id)actualFileInstallPathsWithoutParents;
- (BOOL)_isUnsafeToObsoleteComponent:(id)a0;
- (BOOL)_shouldAllowReceiptBasedFileObsoletingForPackage:(id)a0;
- (BOOL)_shouldAllowListBasedObsoletingForPackage:(id)a0;
- (id)_versionPreviouslyDeferredForComponentAtPath:(id *)a0;
- (BOOL)_shouldInstallPackageComponent:(id)a0 forPackageSpecifier:(id)a1;
- (id)_knownPrebootFileLocations;
- (id)maskPathsForPackageSpecifier:(id)a0;
- (id)obsoletedFiles;
- (id)truncateBeforeObsoletingFiles;
- (id)potentiallyObsoleteDirectories;
- (id)atomicallyObsoletePaths;
- (id)deferredInstallPaths;
- (id)bundlePathsForContentCaching;
- (id)pathsForCambriaTranslation;
- (BOOL)installsKexts;
- (BOOL)installsSystemLibraries;
- (BOOL)installsPrebootResources;
- (BOOL)installsXPCCacheContent;
- (id)defaultInstallPathForBundleIdentifiers;
- (id)actualInstallPathForBundleIdentifiers;
- (id)installedVersionForBundleIdentifiers;
- (id)downgradePathsForBundleIdentifiers;
- (id)topBundleIdentifiers;
- (id)actualFileInstallPaths;
- (id)extendedAttributesForComponent:(id)a0;

@end
